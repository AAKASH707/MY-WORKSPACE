#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
 
template<typename ForwardIterator> void counting_sort(ForwardIterator begin,
                                                      ForwardIterator end) {
  auto min_max = std::minmax_element(begin, end);
  if (min_max.first == min_max.second) {  // empty range
    return;
  }
  auto min = *min_max.first;
  auto max = *min_max.second;
  std::vector<unsigned> count((max - min) + 1, 0u);
  for (auto i = begin; i != end; ++i) {
    ++count[*i - min];
  }
  for (auto i = min; i <= max; ++i) {
    for (auto j = 0; j < count[i - min]; ++j) {
      *begin++ = i;
    }
  }
}
 
int main() {
  int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
  std::cout << "Original numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
  counting_sort(std::begin(a), std::end(a));
  std::cout << "Sorted numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
}

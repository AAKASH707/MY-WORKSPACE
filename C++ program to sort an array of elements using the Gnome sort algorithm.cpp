 //Ref: https://bit.ly/2rcvXK5
#include <algorithm>
#include <iterator>
#include <iostream>
 
template<typename RandomAccessIterator>
void gnome_sort(RandomAccessIterator begin, RandomAccessIterator end) {
  auto i = begin + 1;
  auto j = begin + 2;
 
  while (i < end) {
    if (!(*i < *(i - 1))) {
      i = j;
      ++j;
    } else {
      std::iter_swap(i - 1, i);
      --i;
      if (i == begin) {
        i = j;
        ++j;
      }
    }
  }
}
 
int main() {
  int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
  std::cout << "Original numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
  gnome_sort(std::begin(a), std::end(a));
  std::cout << "Sorted numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
}

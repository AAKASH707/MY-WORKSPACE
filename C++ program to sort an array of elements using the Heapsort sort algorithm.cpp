//Ref: https://bit.ly/2rcvXK5
#include <algorithm>
#include <iterator>
#include <iostream>
 
template<typename RandomAccessIterator>
void heap_sort(RandomAccessIterator begin, RandomAccessIterator end) {
  std::make_heap(begin, end);
  std::sort_heap(begin, end);
}
 
int main() {
  int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
  std::cout << "Original numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";

  heap_sort(std::begin(a), std::end(a));
  std::cout << "Sorted numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
}

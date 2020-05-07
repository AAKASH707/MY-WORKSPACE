#include <algorithm>
#include <iostream>
#include <iterator>
template <typename RandomAccessIterator>
void bubble_sort(RandomAccessIterator begin, RandomAccessIterator end) 
 {
   bool swapped = true;
   while (begin != end-- && swapped) 
   {
     swapped = false;
     for (auto i = begin; i != end; ++i)
	 {
       if (*(i + 1) < *i) {
         std::iter_swap(i, i + 1);
         swapped = true;
       }
     }
   }
}
 
int main() {
  int a[] = {125, 0, 695, 3, -256, -5, 214, 44, 55};
  std::cout << "Original numbers:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";

  bubble_sort(std::begin(a), std::end(a));
  std::cout << "Sorted array:\n";
  copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
}

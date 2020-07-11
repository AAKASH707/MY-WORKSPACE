#include <iostream>

void quick_Sort(int *nums, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = nums[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (nums[i] < pivot)
               i++;
        while (nums[j] > pivot)
              j--;
                 if (i <= j)
        {
                            temp = nums[i];
                                          nums[i] = nums[j];
                                                          nums[j] = temp;
                                                                      i++;
                                                                      j--;
        }
    }
    if (j > low)
        quick_Sort(nums, low, j);
    if (i < high)
        quick_Sort(nums, i, high);
}

int main()
{
    int nums[] =  {125, 0, 695, 3, -256, -5, 214, 44, 55};

    int n = sizeof(nums)/sizeof(nums[0]);

    std::cout << "Before Quick Sort:" << std::endl;
                                         for (int i = 0; i < n; ++i)
                                                                     std::cout << nums[i] <<(std::cout, " ");

    quick_Sort(nums, 0, n);

                         std::cout << "\nAfter Quick Sort:" << std::endl;
                                                                         for (int i = 0; i < n; ++i)
                                                                                                    std::cout << nums[i] << (std::cout, " ");
    return (0);
}

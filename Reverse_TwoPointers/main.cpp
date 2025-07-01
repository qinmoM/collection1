#include <iostream>
#include "Solution.h"

int main()
{
    Solution<int> s;
    int arr[5] = { 0, 1, 2, 3, 4 };
    s.Reverse(arr, 5);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
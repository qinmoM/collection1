#pragma once

template<class T>
class Solution
{
public:
    void Reverse(T* arr, int size)
    {
        T* left = arr;
        T* right = arr + size - 1;
        T temp;
        while (left < right)
        {
            temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }
    }
};
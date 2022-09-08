/* 
    Name: BinarySearch.c
    Date: 2022/9/6
    Author: OLENCER.
*/

#include "BinarySearch.h"

int binarySearch(const int a[], int from, int to, int key)
{
    int mid;

    while (from <= to)
    {
        mid = (from + to) >> 1;

        if(key < a[mid])
        {
            to = mid - 1;
        }
        else if(key > a[mid])
        {
            from = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -(from + 1);
}
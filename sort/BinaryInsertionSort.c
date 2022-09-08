/* 
    Name: InsertionSort(BinarySearch).c
    Date: 2022/9/6
    Author: OLENCER.
*/

#include "BinaryInsertionSort.h"

void binaryInsertionSort(int a[], int length)
{
    int i, j, key, index;

    for(j = 1; j < length; j++)
    {
        key = a[j];
        i = j - 1;

        if((index = binarySearch(a, 0, i, key)) < 0)
        {
            index = -(index + 1);
        }

        while (i >= index)
        {
            a[i + 1] = a[i];
            i--;
        }

        a[index] = key;
    }
}
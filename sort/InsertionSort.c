/* 
    Name: InsertionSort.c
    Date: 2022/9/2
    Author: OLENCER.
*/

#include "InsertionSort.h"

void insertionSort(int a[], int length)
{
    int i, j, key;

    for(j = 1; j < length; j++)
    {
        key = a[j];
        i = j - 1;

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }

        a[i + 1] = key;
    }
}
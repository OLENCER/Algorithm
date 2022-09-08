/* 
    Name: SELECTIONSORT.c
    Date: 2022/9/5
    Author: OLENCER.
*/

#include "SelectionSort.h"

void selectionSort(int a[], int length)
{
    int i, j, min, temp;

    for(j = 0; j < length - 1; j++)
    {
        for(min = j, i = j + 1; i < length; i++)
        {
            if(a[i] < a[min]) { min = i; }
        }
        temp = a[min], a[min] = a[j], a[j] = temp;
    }
}

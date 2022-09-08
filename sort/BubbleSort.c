/* 
    Name: BubbleSort.c
    Date: 2022/9/6
    Author: OLENCER.
*/

#include "BubbleSort.h"

void bubbleSort(int a[], int length)
{
    int i, j, temp;

    for(i = 0; i < length; i++)
    {
        for(j = length - 1; j > i; j--)
        {
            if(a[j] < a[j - 1]) { temp = a[j], a[j] = a[j - 1], a[j - 1] = temp; }
        }
    }
}
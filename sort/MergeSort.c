/* 
    Name: MergeSort.c
    Date: 2022/9/5
    Author: OLENCER.
*/

#include "MergeSort.h"

void merge(int a[], int from, int gap, int to)
{
    int i, j, k;

    int n1 = gap - from + 1;
    int n2 = to - gap;

    int* b = (int*)malloc((n1 + 1) * sizeof(int));
    int* c = (int*)malloc((n2 + 1) * sizeof(int));

    for(i = 0; i < n1; i++) { b[i] = a[from + i]; }
    for(j = 0; j < n2; j++) { c[j] = a[gap + j + 1]; }

    b[n1]  = c[n2] = INT_MAX;
    i = j = 0;

    for(k = from; k <= to; k++)
    {
        if(b[i] <= c[j])
        {
            a[k] = b[i];
            i++;
        }
        else
        {
            a[k] = c[j];
            j++;
        }
    }
}

void mergeSort(int a[], int from, int to)
{
    int gap;

    if(from < to)
    {
        gap = (from + to) >> 1;

        mergeSort(a, from, gap);
        mergeSort(a, gap + 1, to);
        merge(a, from, gap, to);
    }
}
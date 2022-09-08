/* 
    Name: InsertionMergeSort.c
    Date: 2022/9/8
    Author: OLENCER.
*/

#include "InsertionMergeSort.h"

static void insertionMergeSort0(int a[], int from, int to, int k)
{
    int gap;

    if(from < to)
    {
        gap = (from + to) >> 1;

        insertionMergeSort0(a, from, gap, k);
        insertionMergeSort0(a, gap + 1, to, k);

        if(to - from + 1 < k)
        {
            insertionSort(a + from, to - from + 1);
        }
        else
        {
            merge(a, from, gap, to);
        }
    }
}
void insertionMergeSort(int a[], int from, int to)
{
    int k = (int)log2((double)(to - from + 1));
    insertionMergeSort0(a, from, to, k);
}
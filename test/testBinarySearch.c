/* 
    Name: BinarySearch.cpp
    Date: 2022/9/6
    Author: OLENCER.
*/

#include "../search/BinarySearch.h"
#include "../sort/InsertionMergeSort.h"
#include "../data/IntegerArray.h"

#include <time.h>
#include <stdio.h>

#define testSample0 intArray100
#define testSample1 intArray1000
#define testSample2 intArray10000

int main()
{
    insertionMergeSort(testSample0, 0, sizeof(testSample0) / sizeof(int) - 1);
    insertionMergeSort(testSample1, 0, sizeof(testSample1) / sizeof(int) - 1);
    insertionMergeSort(testSample2, 0, sizeof(testSample2) / sizeof(int) - 1);

    printf("-----------------------------testSample0-----------------------------\n");
    clock_t start0 = clock();
    printf("%d\n", binarySearch(testSample0, 0, 99, -9999));
    clock_t end0 = clock();


    printf("-----------------------------testSample1-----------------------------\n");
    clock_t start1 = clock();
    printf("%d\n", binarySearch(testSample1, 0, 999, -9999));
    clock_t end1 = clock();

    printf("-----------------------------testSample2-----------------------------\n");
    clock_t start2 = clock();
    printf("%d\n", binarySearch(testSample2, 0, 9999, -9999));
    clock_t end2 = clock();

    printf("\n");
    printf("binarySearch(testSample0) completed, taken %.3lf second\n", (double)(end0 - start0)/CLOCKS_PER_SEC);
    printf("binarySearch(testSample1) completed, taken %.3lf second\n", (double)(end1 - start1)/CLOCKS_PER_SEC);
    printf("binarySearch(testSample2) completed, taken %.3lf second\n", (double)(end2 - start2)/CLOCKS_PER_SEC);
}

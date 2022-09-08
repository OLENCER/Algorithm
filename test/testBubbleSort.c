/* 
    Name: BubbleSort.c
    Date: 2022/9/6
    Author: OLENCER.
*/

#include "../sort/BubbleSort.h"
#include "../data/IntegerArray.h"

#include <time.h>
#include <stdio.h>

#define testSample0 intArray100
#define testSample1 intArray1000
#define testSample2 intArray10000

int main()
{
    clock_t start0 = clock();
    bubbleSort(testSample0, sizeof(testSample0) / sizeof(int));
    clock_t end0 = clock();

    printf("-----------------------------testSample0-----------------------------\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%5d, ",testSample0[i * 10 + j]);
        }
        printf("\n");
    }

    clock_t start1 = clock();
    bubbleSort(testSample1, sizeof(testSample1) / sizeof(int));
    clock_t end1 = clock();


    clock_t start2 = clock();
    bubbleSort(testSample2, sizeof(testSample2) / sizeof(int));
    clock_t end2 = clock();

    printf("\n");
    printf("bubbleSort(testSample0) completed, taken %.3lf second\n", (double)(end0 - start0)/CLOCKS_PER_SEC);
    printf("bubbleSort(testSample1) completed, taken %.3lf second\n", (double)(end1 - start1)/CLOCKS_PER_SEC);
    printf("bubbleSort(testSample2) completed, taken %.3lf second\n", (double)(end2 - start2)/CLOCKS_PER_SEC);
}
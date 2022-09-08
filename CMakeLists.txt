cmake_minimum_required(VERSION 3.23)
project(Algorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(
        InsertionSort
        test/testInsertionSort.c
        sort/InsertionSort.c
)

add_executable(
        BinaryInsertionSort
        test/testBinaryInsertionSort.c
        sort/BinaryInsertionSort.c
        search/BinarySearch.c
)

add_executable(
        SelectionSort
        test/testSelectionSort.c
        sort/SelectionSort.c
)

add_executable(
        MergeSort
        test/testMergeSort.c
        sort/MergeSort.c
)

add_executable(
        InsertionMergeSort
        test/testInsertionMergeSort.c
        sort/InsertionMergeSort.c
        sort/MergeSort.c
        sort/InsertionSort.c
)

add_executable(
        BubbleSort
        test/testBubbleSort.c
        sort/BubbleSort.c
)

add_executable(
        BinarySearch
        test/testBinarySearch.c
        search/BinarySearch.c
        sort/InsertionMergeSort.c
        sort/MergeSort.c
        sort/InsertionSort.c
)

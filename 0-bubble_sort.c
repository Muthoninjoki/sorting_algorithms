#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts  an array of integers in ascending order using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array 
 * 
 */void bubble_sort(int *array, size_t size);
{
    size_t i, j;
    int temp;
    int swapped;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;  /* Flag to check if any swap occurred in this pass */

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Swap elements */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1;  /* Set the flag to true */
                print_array(array, size);  /* Print array after each swap */
            }
        }

        /* If no two elements were swapped by inner loop, the array is sorted */
        if (swapped == 0)
            break;
    }
}

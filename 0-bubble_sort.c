#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - for sorting values in an array
 * @array: array to be swaped
 * @size: unsigned size
 */

void bubble_sort(int *array, size_t size)
{
unsigned int i;
unsigned  int j;
int temp = 0;

if (array == NULL || size == 0)
return;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[i] > array[j + 1])
{
/*Swap the arrays @ each array index*/
temp = array[i];
array[i] = array[j];
array[j] = temp;
/*Print the array*/
print_array(array, size);
}
}
}
}

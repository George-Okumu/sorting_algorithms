#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
unsigned int i;
unsigned  int j;
int temp = 0;

for (i = 0; i < size -1; i++)
{
    for(j = 0; j < size - 1; j++)
    {
        if(array[i] > array[j + 1])
        {
          /*Swap the elements*/ 
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
          /*Print the array*/
          print_array(array, size);
        }
    }
}
}

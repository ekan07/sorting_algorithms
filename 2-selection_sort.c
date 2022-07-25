#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	register int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (i != min)
			print_array(array, size);
	}
}

/*
void selection_sort(int *array, size_t size)
{
	int sorted_elnt, swp, tmp;
	size_t i, j, n = 0, arr_index = 0;
	
	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			swp = array[i];
			if (swp > array[j + 1])
			{
				
				arr_index = j + 1;
				sorted_elnt = array[arr_index];
				array[i] = sorted_elnt;
				array[arr_index] = swp;
				if (arr_index != size - 1)
					n = arr_index;
			}
		}
		tmp = array[n];
		array[n] = array[arr_index];
		array[arr_index] = tmp;
		
		print_array(array, size);
		
	}
}
*/
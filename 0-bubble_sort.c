#include "sort.h"

/**
 * bubble_sort - Sort an array
 *
 * @array: 'unsorted' array
 * @size: Length of the array
 * Description: Uses the Bubble Sort algorithm on an
 * unsorted array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, status = 0;
	size_t i, j;

	for (i = 1; i < size; i++) /*Repeat n-1 times.*/
	{
		for (j = 0; j < size - 1; j++) /*Repeat n-2 times.*/
		{
			if (*(array + j) > *(array + (j + 1)))
			{
				temp = *(array + j);
				*(array + j) = *(array + (j + 1));
				*(array + (j + 1)) = temp;
				status = 1;
				print_array(array, size);
			}
		}

		if (status == 0)
			break;
	}
}

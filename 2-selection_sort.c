#include "sort.h"

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, n, m;

	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[n])
				n = j;
		}
		if (n != i)
		{
			m = array[n];
			array[n] = array[i];
			array[i] = m;
			print_array(array, size);
		}	
	}
}

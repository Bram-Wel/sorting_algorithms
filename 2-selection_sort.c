#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int n;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		n = *(array + i);
		for (j = i; j < size; j++)
		{
			/* printf("%lu", j);*/
			if (*(array + j) < n)
			{
				n = *(array + j);
				k = j;
			}
			/*printf("=>%d; ", n);*/
		}	
		/*printf("\n");*/
		*(array + k) = *(array + i);
		*(array + i) = n;
		/*printf("n:=> %d\n", n);*/
		print_array(array, size);
	}
}

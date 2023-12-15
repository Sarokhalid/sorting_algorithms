#include "sort.h"
/**
 * bubble_sort - jhjhfhjd
 * @array: pointer
 * @size: fhfjjjwkk
 */
void bubble_sort(int *array, size_t size)
{
	size_t s, m;
	int t;
	int sw;

	if (array == NULL || size < 2)
		return;
	for (s = 0; s < size - 1; s++)
	{
		sw = 0;

		for (m = 0; m < size - s - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				t = array[m];
				array[m] = array[m + 1];
				array[m + 1] = t;
				sw = 1;
				print_array(array, size);
			}
		}
		if (sw == 0)
			break;
	}
}

#include "sort.h"
/**
 * selection_sort - hfjjkf
 * @array: jdjjjfj
 * @size: jmjhfhhf
 */
void selection_sort(int *array, size_t size)
{
	size_t s, m, min;
	int t;

	for (s = 0; s < size - 1; s++)
	{
		min = s;
		for (m = s + 1; m < size; m++)
		{
			if (array[m] < array[min])
				min = m;
		}
		if (min != s)
		{
			t = array[s];
			array[s] = array[min];
			array[min] = t;
			print_array(array, size);
		}
	}
}

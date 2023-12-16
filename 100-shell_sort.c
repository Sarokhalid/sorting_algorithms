#include "sort.h"
/**
 * shell_sort - jdjhh
 * @array: hdgdf
 * @size: jdhggf
 */
void shell_sort(int *array, size_t size)
{
	size_t g = 1;
	size_t s, m;
	int t;

	if (array == NULL || size < 2)
		return;
	while (g < size / 3)
		g = g * 3 + 1;
	while (g > 0)
	{
		for (s = g; s < size; s++)
		{
			t = array[s];
			m = s;

			while (m >= g && array[m - g] > t)
			{
				array[m] = array[m - g];
				m -= g;
			}
			array[m] = t;
		}
			print_array(array, size);
			g = (g - 1) / 3;
	}
}

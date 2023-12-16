#include "sort.h"
/**
 * counting_sort - kjshhd
 * @array: jhhgghs
 * @size: hdggd
 */
void counting_sort(int *array, size_t size)
{
	int *c, *ou;
	size_t s, max = 0;

	if (array == NULL || size < 2)
		return;
	for (s = 0; s < size; s++)
	{
		if (array[s] > (int)max)
			max = array[s];
	}
	c = malloc(sizeof(int) * (max + 1));
	if (c == NULL)
		return;
	for (s = 0; s <= max; s++)
		c[s] = 0;
	for (s = 0; s < size; s++)
		c[array[s]]++;
	for (s = 1; s <= max; s++)
		c[s] += c[s - 1];
	ou = malloc(sizeof(int) * size);
	if (ou == NULL)
	{
		free(c);
		return;
	}
	for (s = 0; s < size; s++)
	{
		ou[c[array[s]] - 1] = array[s];
		c[array[s]]--;
	}
	for (s = 0; s < size; s++)
		array[s] = ou[s];
	print_array(c, max + 1);
	free(c);
	free(ou);
}

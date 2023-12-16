#include "sort.h"
/**
 * maxi - kjhhd
 * @array: jjhhd
 * @size: kjhhd
 * Return: jhgggs
 */
int maxi(int *array, int size)
{
	int max;
	int s;

	for (max = array[0], s = 1; s < size; s++)
	{
		if (array[s] > max)
			max = array[s];
	}
	return (max);
}
/**
 * counting_sort - kjshhd
 * @array: jhhgghs
 * @size: hdggd
 */
void counting_sort(int *array, size_t size)
{
	int *c, *so, m, s;

	if (array == NULL || size < 2)
		return;

	so = malloc(sizeof(int) * size);
	if (so == NULL)
		return;
	m = maxi(array, size);
	c = malloc(sizeof(int) * (m + 1));
	if (c == NULL)
	{
		free(so);
		return;
	}
	for (s = 0; s < (m + 1); s++)
		c[s] = 0;
	for (s = 0; s < (int)size; s++)
		c[array[s]] += 1;
	for (s = 0; s < (m + 1); s++)
		c[s] += c[s - 1];
	print_array(c, m + 1);
	for (s = 0; s < (int)size; s++)
	{
		so[c[array[s]] - 1] = array[s];
		c[array[s]] -= 1;
	}
	for (s = 0; s < (int)size; s++)
		array[s] = so[s];
	free(so);
	free(c);
}

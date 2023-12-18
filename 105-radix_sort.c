#include "sort.h"
/**
 * count - jhdsgghsd
 * @array: jhgd
 * @size: jhggd
 * @si: jhgd
 * @buf: jhgg
 */
void count(int *array, size_t size, int si, int *buf)
{
	size_t s;
	int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (s = 0; s < size; s++)
		c[(array[s] / si) % 10] += 1;
	for (s = 0; s < 10; s++)
		c[s] += c[s - 1];
	for (s = size - 1; (int)s >= 0; s--)
	{
		buf[c[(array[s] / si) % 10] - 1] = array[s];
		c[(array[s] / si) % 10] -= 1;
	}
	for (s = 0; s < size; s++)
		array[s] = buf[s];
}
/**
 * get - hjhgd
 * @array: jnhhgd
 * @size: jhggd
 * Return: jhggs
 */
int get(int *array, int size)
{
	int m, s;

	for (m = array[0], s = 1; s < size; s++)
	{
		if (array[s] > m)
			m = array[s];
	}
	return (m);
}
/**
 * radix_sort - jhggd
 * @array: jhgd
 * @size: jhggd
 */
void radix_sort(int *array, size_t size)
{
	int m, si, *buf;

	if (array == NULL || size < 2)
		return;
	buf = malloc(sizeof(int) * size);
	if (buf == NULL)
		return;
	m = get(array, size);
	for (si = 1; m / si > 0; si *= 10)
	{
		count(array, size, si, buf);
		print_array(array, size);
	}
	free(buf);
}

#include "sort.h"
/**
 * swap - jjkiikjhds
 * @q: jhhgsghgs
 * @w: jhsggsg
 */
void swap(int *q, int *w)
{
	int t = *q;
	*q = *w;
	*w = t;
}
/**
 * part - ushghsu
 * @array: jjshghs
 * @l: ksjhhshs
 * @h: jjshhs
 * Return: hahjakaskks
 */
size_t part(int *array, ssize_t l, ssize_t h)
{
	int p = array[h];
	ssize_t s = l - 1, m;

	for (m = l; m <= h - 1; m++)
	{
		if (array[m] <= p)
		{
			s++;
			swap(&array[s], &array[m]);
			if (s != m)
				print_array(array, h + 1);
		}
	}
	swap(&array[s + 1], &array[h]);
	if (s + 1 != h)
		print_array(array, h + 1);
	return (s + 1);
}
/**
 * quick - jhsghsjjkkw
 * @array: jsjhhs
 * @l: jsjhhs
 * @h: jksjhshjs
 */
void quick(int *array, ssize_t l, ssize_t h)
{
	if (l < h)
	{
		ssize_t pi = part(array, l, h);

		quick(array, l, pi - 1);
		quick(array, pi + 1, h);
	}
}
/**
 * quick_sort - jshghsjs
 * @array: jshhgs
 * @size: jhsghjs
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick(array, 0, size - 1);
}


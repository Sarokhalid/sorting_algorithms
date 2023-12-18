#include "sort.h"
/**
 * heap - jdjko
 * @array: jhhdbhjjjjjj
 * @size: jhhhd
 * @b: hhdshhd
 * @ro: jkjhhf
 */
void heap(int *array, size_t size, size_t b, size_t ro)
{
	size_t l, r, g;

	l = 2 * ro + 1;
	r = 2 * ro + 2;
	g = ro;

	if (l < b && array[l] > array[g])
		g = l;
	if (r < b && array[r] > array[g])
		g = r;
	if (g != ro)
	{
		sw(array + ro, array + g);
		print_array(array, size);
		heap(array, size, b, g);
	}
}
/**
 * sw - hggf
 * @q: jhhhf
 * @w: jkhjhd
 */
void sw(int *q, int *w)
{
	int t;

	t = *q;
	*q = *w;
	*w = t;
}
/**
 * heap_sort - jdhgd
 * @array: hhghdf
 * @size: jhhhdf
 */
void heap_sort(int *array, size_t size)
{
	int s;

	if (array == NULL || size < 2)
		return;
	for (s = (size / 2) - 1; s >= 0; s--)
		heap(array, size, size, s);
	for (s = size - 1; s > 0; s--)
	{
		sw(array, array + s);
		print_array(array, size);
		heap(array, size, s, 0);
	}
}

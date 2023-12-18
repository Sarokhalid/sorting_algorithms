#include "sort.h"
/**
 * SWA - jhhggd
 * @q: jjhhhd
 * @w: jjjdj
 */
void SWA(int *q, int *w)
{
	int t;

	t = *q;
	*q = *w;
	*w = t;
}
/**
 * hpart - jhhgd
 * @array: kjjjd
 * @size: jhjhdfh
 * @l: jjdj
 * @r: jjjd
 * Return: jhhgegh
 */
int hpart(int *array, size_t size, int l, int r)
{
	int p, ab, be;

	p = array[r];
	for (ab = l - 1, be = r + 1; ab < be;)
	{
		do {
			ab++;
		} while (array[ab] < p);
		do {
			be--;
		} while (array[be] > p);
		if (ab < be)
		{
			SWA(array + ab, array + be);
			print_array(array, size);
		}
	}
	return (ab);
}
/**
 * hs - jhhhd
 * @array: jjhjs
 * @size: jhd
 * @l: jjjd
 * @r: jjjjd
 */
void hs(int *array, size_t size, int l, int r)
{
	int p;

	if (r - l > 0)
	{
		p = hpart(array, size, l, r);
		hs(array, size, l, p - 1);
		hs(array, size, p, r);
	}
}
/**
 * quick_sort_hoare - jhhhw
 * @array: jhjhd
 * @size: jhhed
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	hs(array, size, 0, size - 1);
}

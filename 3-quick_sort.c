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
 * @size: dhhbhef
 * @l: ksjhhshs
 * @r: jjshhs
 * Return: hahjakaskks
 */
int part(int *array, size_t size, int l, int r)
{
	int *p, ab, be;

	p = array + r;
	for (ab = be = l; be < r; be++)
	{
		if (array[be] < *p)
		{
			if (ab < be)
			{
				swap(array + be, array + ab);
				print_array(array, size);
			}
			ab++;
		}
	}
	if (array[ab] > *p)
	{
		swap(array + ab, p);
		print_array(array, size);
	}
	return (ab);
}

/**
 * quick - jhsghsjjkkw
 * @array: jsjhhs
 * @size: jdjhgd
 * @l: jsjhhs
 * @r: jksjhshjs
 */
void quick(int *array, size_t size, int l, int r)
{
	int pa;

	if (r - l > 0)
	{
		pa = part(array, size, l, r);
		quick(array, size, l, pa - 1);
		quick(array, size, pa + 1, r);
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
	quick(array, size, 0, size - 1);
}


#include "sort.h"
/**
 * SW - hjhgd
 * @q: hhd
 * @w: jhhf
 */
void SW(int *q, int *w)
{
	int t;

	t = *q;
	*q = *w;
	*w = t;
}
/**
 * b - jhhggd
 * @size: jhhhd
 * @array: jhhd
 * @sq: jjhhh
 * @st: hjhhd
 * @f: nhhd
 */
void b(int *array, size_t size, size_t st, size_t sq, char f)
{
	size_t s, j = sq / 2;

	if (sq > 1)
	{
		for (s = st; s < st + j; s++)
		{
			if ((f == UP && array[s] > array[s + j]) ||
					(f == DOWN && array[s] < array[s + j]))
				SW(array + s, array + s + j);
		}
		b(array, size, st, j, f);
		b(array, size, st + j, j, f);
	}
}
/**
 * bs - hhggggs
 * @size: jhhgd
 * @array: jhjdh
 * @st: hhgghhd
 * @sq: jhhhd
 * @f: jnhhhd
 */
void bs(int *array, size_t size, size_t st, size_t sq, char f)
{
	char *str = (f == UP) ? "UP" : "DOWN";
	size_t cu = sq / 2;

	if (sq > 1)
	{
		printf("Merging [%lu/%lu] (%s):\n", sq, size, str);
		print_array(array + st, sq);
		bs(array, size, st, cu, UP);
		bs(array, size, st + cu, cu, DOWN);
		b(array, size, st, sq, f);
		printf("Result [%lu/%lu] (%s):\n", sq, size, str);
		print_array(array + st, sq);
	}
}
/**
 * bitonic_sort - jhggged
 * @array: jhgd
 * @size: jhhgd
 */
void bitonic_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	bs(array, size, 0, size, UP);
}

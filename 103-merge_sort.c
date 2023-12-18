#include "sort.h"
/**
 * ms - jshghr
 * @buf: hggd
 * @f: kjjdl
 * @sub: jhged
 * @md: nhdshgd
 * @b: jhgg
 */
void ms(int *sub, int *buf, size_t f, size_t md, size_t b)
{
	size_t s, m, k = 0;

	printf("Merging...\n[left]: ");
	print_array(sub + f, md - f);
	printf("[right]: ");
	print_array(sub + md, b - md);
	for (s = f, m = md; s < md && m < b; k++)
		buf[k] = (sub[s] < sub[m]) ? sub[s++] : sub[m++];
	for (; s < md; s++)
		buf[k++] = sub[s];
	for (; m < b; m++)
		buf[k++] = sub[m];
	for (s = f, k = 0; s < b; s++)
		sub[s] = buf[k++];
	printf("[Done]: ");
	print_array(sub + f, b - f);
}
/**
 * mr - hjshgd
 * @sub: jhhgd
 * @buf: jhh
 * @f: jhg
 * @b: jhdh
 */
void mr(int *sub, int *buf, size_t f, size_t b)
{
	size_t md;

	if (b - f > 1)
	{
		md = f + (b - f) / 2;
		mr(sub, buf, f, md);
		mr(sub, buf, md, b);
		ms(sub, buf, f, md, b);
	}
}
/**
 * merge_sort - gjjkk
 * @array: hgghd
 * @size: jhdgge
 */
void merge_sort(int *array, size_t size)
{
	int *buf;

	if (array == NULL || size < 2)
		return;
	buf = malloc(sizeof(int) * size);
	if (buf == NULL)
		return;
	mr(array, buf, 0, size);
		free(buf);
}

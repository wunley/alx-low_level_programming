#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of
 * a square matrix
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; yt < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y++)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d", sum1, sum2);
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print natural numbers to 98
 *
 * @n: number to start from
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	n = 0;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%i\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

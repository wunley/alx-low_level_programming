#include "main.h"
/**
 * print_numbers - prints numbers from zero to nine followes by a new line
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int numI;

	for (numI = 0; numI < 10; numI++)
	{
		_putchar(numI + '0');
	}
	_putchar('\n');
}

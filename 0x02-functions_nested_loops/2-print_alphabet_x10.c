#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 0; n < 11; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

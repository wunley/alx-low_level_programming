#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a parameter
 * Return: void
 */
void rev_string(char *s)
{
	int a, b;

	int b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		a++;
		_putchar(s[a]);
	}
}

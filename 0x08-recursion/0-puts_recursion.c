#include "main.h"
/**
 * _puts__recursion - prints a string in reverse
 * @s: the  string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

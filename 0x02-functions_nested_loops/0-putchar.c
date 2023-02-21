#include <stdio.h>
#include <main.h>
#include <unistd.h>
/**
 * main - program that prints _putchar followed by a new line
 * _putchar - writes the character c to stdout
 * Return: Always 0 (success)
 * @c: The character to print
 */
int _putchar(char c);
int main(void)
{
	_putchar("putchar");
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

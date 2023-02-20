#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int basey;

	for (basey = '0'; basey < '10'; basey++)
	{
		putchar(basey);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

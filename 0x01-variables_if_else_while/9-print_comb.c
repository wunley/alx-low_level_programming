#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int basey;

	for (basey = '0'; basey <= '9'; basey++)
	{
		putchar(basey);
	if (basey != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <string.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char hexi;

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}
	for (hexi = 'a'; hexi <= 'f'; hexi++)
	{
		putchar(hexi);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

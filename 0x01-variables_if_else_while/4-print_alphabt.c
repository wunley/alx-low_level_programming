#include <stdio.h>
#include <string.h>
/**
 * main - Prints the alphabet except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
			else
			{
				putchar(ch);
			}
	}
	putchar('\n');
	return (0);
}

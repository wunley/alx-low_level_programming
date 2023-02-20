#include <stdio.h>
#include <string.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexi = 0;

	while (hexi < 16)
	{
		if (hexi >= '0' || hexi <= '10')
			putchar(hexi);
		else
		{
			putchar(hexi + 32);
		}
		putchar('\n');
		return (0);
	}
}

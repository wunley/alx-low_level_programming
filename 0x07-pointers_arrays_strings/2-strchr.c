#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string that contains the character to be found
 * @c: character to be found
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *find;
	int j = 0;

	for (; c != '\0'; j++)
	{
		if (s[j] == c)
		{
			*find = s[j];
		}
		else
		{
			_putchar('\0');
		}
	}
	return (find);
}

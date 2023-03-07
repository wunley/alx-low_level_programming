#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string that contains the character to be found
 * @c: character to be found
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}


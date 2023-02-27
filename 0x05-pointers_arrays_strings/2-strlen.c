#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: a parameter
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int a = 0; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}


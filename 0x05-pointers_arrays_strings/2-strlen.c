#include "main.h"

/**
 * _strlen -  Returns the length of a string
 *
 * @s: string to be counted
 *
 * Return: The length of string
 */
int _strlen(char *s)
{

	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

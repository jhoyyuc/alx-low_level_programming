#include "main.h"

/**
 * print_rev -  Prints a string in reverse followedmby a new line
 *
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int l;

	l = 0;

	while (*(s + l) != '\0')
		l++;
	l--;
	for (; l >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}

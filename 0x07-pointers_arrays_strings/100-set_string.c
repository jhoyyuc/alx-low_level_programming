#include "main.h"

/**
 * set_string - sets the valueof a pointer to a char
 * @s: source address
 * @to: target address
 */
void set_string(char **s, char *to)
{
	*s = to;
}

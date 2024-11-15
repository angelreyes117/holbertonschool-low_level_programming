#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer that will be updated
 * @to: the string to which the pointer will point
 */
void set_string(char **s, char *to)
{
	*s = to;  /* Set the pointer s to point to the string 'to' */
}

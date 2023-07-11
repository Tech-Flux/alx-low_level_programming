#include "main.h"
#include <stdlib.h>
/**
 * create array: char *create_array(unsigned int size, char c)
 * @size: size of an array
 * @c: the character c for storage
 * return: pointer of an array
 */

char *create_array(unsigned int size, char c)
{
	char *c;
	unsigned int a;

	if (size == 0)
		return (NULL);
	
	c = malloc(sizeof(c) * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		c[i] = c;

	return (c);
}

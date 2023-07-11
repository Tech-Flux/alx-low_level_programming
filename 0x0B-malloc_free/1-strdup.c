#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: On success, returns a pointer to a newly allocated duplicate string.
 *         Returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *strng;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	strng = (char *)malloc(sizeof(char) * (a + 1));
	if (strng == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		strng[b] = str[b];

	return (strng);
}

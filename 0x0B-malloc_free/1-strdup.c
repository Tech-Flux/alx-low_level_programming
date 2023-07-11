#include "main.h"
#include <stdlib.h>
/**
 * _strdup: return the memory alocated to the newly allocated
 * @str: string
 * return: return the pointer of an array of characters
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

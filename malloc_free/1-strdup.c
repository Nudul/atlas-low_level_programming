#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - string duplicate
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	int i;

	if (str == NULL)
	return (NULL);

	int length = 0;

	while (str[length] != '\0')
		{
			length++;
		}

	char *new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	return (NULL);

for (i = 0; i <= length; i++)
	{
		new_str[i] = str[i];
	}

return new_str;

}
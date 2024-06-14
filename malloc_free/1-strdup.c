#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - string duplicate
 * @str: exists to be duplicated by new_str
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *new_str;

	if (str == NULL)
	return (NULL);

		while (str[length] != '\0')
		{
			length++;
		}

	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
	return (NULL);

		for (i = 0; i <= length; i++)
	{
		new_str[i] = str[i];
	}

return (new_str);

}

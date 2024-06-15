#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* string_nconcat - concatenates 2 strings
* @s1: concatenates with s2
* @s2: concatenates with s1
* @n: number of char
* Return: result, stores the string for us dynamically
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int full_len;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	len1++;

	len2 = 0;
	while (s2[len2] != '\0')
	len2++;

	full_len = len1 + ((n < len2) ? n : len2);

	result = (char *)malloc(full_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	result[i] = s1[i];

	for (i = 0; i < n && i < len2; i++)
	result[len1 + i] = s2[i];

	result[full_len] = '\0';

	return (result);
}

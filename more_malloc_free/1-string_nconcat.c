#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = 0;
	while (s1[len1] != '\0')
	len1++;

	unsigned int len2 = 0;
	while (s2[len2] != '\0')
	len2++;

	unsigned int full_len = len1 + ((n < len2) ? n : len2);
	char *result = (char *)malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	result[i] = s1[i];

	for (i = 0; i < n && i < len2; i++)
	result[len1 + i] = s2[i];

	result[total_len] = '\0';

	return (result);
}

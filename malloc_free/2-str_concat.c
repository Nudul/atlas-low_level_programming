#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*
*/
char *str_concat(char *s1, char *s2)
{

int i;
int j;

if (s1 == NULL)
	{
		s1 = "";
	}
if (s2 == NULL)
	{
		s2 = "";
	}

	int len1 = string_length(s1);
	int len2 = string_length(s2);
	int total_len = len1 + len2;

	char *result = (char *)malloc((total_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

for (i = 0; i < len1; i++)
{
	result[i] = s1[i];
}

for (j = 0; j < len2; j++)
{
	result[i + j] = s2[j];
}

result[total_len] = '\0';

return (result);
}

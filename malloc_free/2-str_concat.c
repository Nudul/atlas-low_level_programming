#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*
*/
char *str_concat(char *s1, char *s2)
{

if (s1 == NULL)
	{
		s1 = "";
	}
if (s2 == NULL)
	{
		s2 = "";
	}

size_t length_s1 = strlen(s1);
size_t length_s2 = strlen(s2);

char *result = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));

if (result == NULL)
	{
	return (NULL);
	}

strcpy(result, s1);
strcat(result, s2);

return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*
*/
char *str_concat(char *s1, char *s2)
{

size_t length_s1 = strlen(s1);
size_t length_s2 = strlen(s2);

if (s1 == NULL)
	{
		s1 = "";
	}
if (s2 == NULL)
	{
		s2 = "";
	}

char *result = malloc(sizeof(char)) * (length_s1 + length_s2 + 1)

if (result == NULL);
	return (NULL);

strcpy(result, s1);

strcpy(result + length_s1, s2);

result[length_s1 + length_s2] = '\0';

return (result);
}

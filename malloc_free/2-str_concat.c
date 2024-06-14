#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*
*/
char *str_concat(char *s1, char *s2)
{
char *new_str;
int length;
int dup_str = 0;
int len = 0;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (length = 0; s1[length] || s2[length]; length++) {
	if (s1[length])
		len++;
	if (s2[length])
		len++;
}

new_str = malloc(sizeof(char) * len);
if (new_str == NULL)
	return (NULL);

for (length = 0; s1[length]; length++)
	new_str[dup_str++] = s1[length];

for (length = 0; s2[length]; length++)
	new_str[dup_str++] = s2[length];

return (new_str);
}

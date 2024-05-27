#include "main.h"
/**
 * rev_string - what do u think it does
 *
 * @s: blahblahblah
 */
void rev_string(char *s)
{
	int i, n, j;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = i;
	
	for (i--, n = 0; n < j / 2; i--, n++)
	{
		h = s[n];
		s[n] = s[i];
		s[i] = h;
	}
}

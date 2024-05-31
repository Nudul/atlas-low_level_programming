#include "main.h"
/**
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4330711";

	while (*ptr != '\0')
	{
		char *found = leet_chars;
		char *replace = leet_replacements;

		while (*found != '\0')
		{
			if (*ptr == *found)
			{
				*ptr = *replace;
				break;
			}
			found++;
			replace++;
		}
		ptr++;
	}
	return str;
}

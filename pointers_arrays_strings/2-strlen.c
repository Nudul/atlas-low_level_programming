#include "main.h"
/**
 * _strlen - dldfskf
 *
 * @s: cool letter
 * Return: 0 or 1
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

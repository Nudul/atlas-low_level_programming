#include <stdio.h>

/**
 * main - asdfghjkl
 * 
 * Return: 0
 */

int main(void)
{
	char lowercaseChar, uppercaseChar;

	for (lowercaseChar = 'a'; lowercaseChar <= 'z'; lowercaseChar++)
	{
		putchar(lowercaseChar);
	}

	for (uppercaseChar = 'A'; uppercaseChar <= 'Z'; uppercaseChar++)
	{
		putchar(uppercaseChar);
	}

	return (0);
}

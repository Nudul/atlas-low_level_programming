#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - prints file name
* @argc: counts arguments
* @argv: array of ptr to str
* Return: 0 on success
*/
int is_positive_number(const char *str)
{
	int i;

	if (*str == '\0') return (0);
	while (*str)
	{
		if (!isdigit(*str)) return (0);
		str++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	Return (0);
}

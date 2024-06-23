#include <stdio.h>
/**
* main - prints file name
* @argc: counts arguments
* @argv: array of ptr to str
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}

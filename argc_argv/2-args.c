#include <stdio.h>
/**
* main - prints file name
* @argc: counts arguments
* @argv: array of ptr to str
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}

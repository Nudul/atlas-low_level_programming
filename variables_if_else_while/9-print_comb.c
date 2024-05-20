#include <stdio.h>

/**
 * main - blahblahblah
 *
 * Return: 0
 */

int main(void)
{
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(digits) / sizeof(digits[0]);
	
	int i;

	for (i = 0; i < size ++i)
	{
		printf("%d", digits[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}

printf("\n");

return (0);

}

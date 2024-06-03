#include "main.h"
/**
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	char buffer[17];

	for (i = 0; i < 8, i++)
	{
		int index = 0;
		for (j = 0; j < 8; j++)
		{
			buffer[index++] = a[i][j];
			buffer[index++] = ' ';
		}
		buffer[index++] = '\n';
		buffer[index] = '\0';

		write(1, buffer, index);
	}
}

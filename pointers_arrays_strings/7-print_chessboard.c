#include "main.h"
/**
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			print_char(a[i][j]);
			print_char(' ');
		}
		print_char('\n');
	}
}

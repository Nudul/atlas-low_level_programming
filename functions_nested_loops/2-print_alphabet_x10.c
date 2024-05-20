#include "main.h"

int main(void) {
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			_putchar(alphabet[j]);
		}
	_putchar('\n');
	}
return (0);
}

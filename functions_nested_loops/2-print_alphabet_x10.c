#include "main.h"

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');

	{
		int i;
		for (i = 0; i < 10; ++i)
		{
			for (c = 'a'; c <= 'z'; ++c)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}

	return (0);
}

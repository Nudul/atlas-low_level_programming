#include <stdio.h>
/**
 *
 */

int main(void)
{
	for (unsigned int i = 1; i < 100; i ++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf"%u ", i);
		}
	}

	return (0);
}

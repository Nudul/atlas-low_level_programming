#include "main.h"

int _isupper(int c);

int _isupper(int c) 
{
	return ((c >= 65) && (c <= 90))? 1 : 0;
}

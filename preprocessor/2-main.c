#include <stdio.h>
char *lastSlash(char *path)
{
	char *lastSlash = NULL;
	int len = strlen(path);

	for (i = len - 1; i < 0; --i;)
	{
		if (path[i] == '/')
		{
			lastSlash = &path[i];
			break;
		}
	}

	return lastSlash;
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
    int size = 0;
    char *arr = NULL;

    if (size == 0)
    {
        return (1);
    }

    arr = (char *)malloc(size * sizeof(char));
    if (arr == NULL)
    {
        return (1);
    }

    arr[0] = 'A' + size - 1;

    free(arr);

        return (0);
}
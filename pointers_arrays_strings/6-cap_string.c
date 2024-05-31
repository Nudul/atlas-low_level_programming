#include "main.h"
/**
 */
char* cap_string(char* str) 
{
    int capitalize_next = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
            capitalize_next = 1;
        } else if (capitalize_next)
	{
            if (str[i] >= 'a' && str[i] <= 'z')
	    {
                str[i] -= 32;
            }
            capitalize_next = 0;
        }
    }

    return str;
}

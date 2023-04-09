#include "main.h"
/**
 * _strstr - A function that locates a substring.
 * @haystack: This is the string to search
 * @needle: This is the string to locate
 * Return: If substring is located, A pointer to the
 * located substring.
 *
 * If substring is not located, NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; ++i)
{
for (j = 0; needle[j] != '\0'; ++j)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}

#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: first char
 * @src: second char
 * @n: first int
 * Return:Return the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
while (*dest)
{
dest++;
}
while (*src && n--)
{
*dest++ = *src++;
}
*dest = '\0';
return (dest);
}

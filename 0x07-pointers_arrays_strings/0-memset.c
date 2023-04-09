#include "main.h"
/**
 * _memset - Function that fills memory with n bytes
 * @s: Memory area to be filled with bytes b
 * @b: This is the char to be copied
 * @n : This is number of times to copy char
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

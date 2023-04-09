#include "main.h"
/**
 * _strpbrk - 
 * @s: A function that searches a string
 * for any of a set of bytes
 * @accept: Any of the bytes in the string
 * Return: If set is matched, A pointer to the matched byte
 * If no set is matched, NULL
 */

char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
for (p = accept; *p != '\0'; ++p)
{
if (*s == *p) {
return s;
}
}
++s;
}
return NULL;
}

#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: Character in the string
 * @c: First occurance of the character
 * Return:If c is found, A pointer to c
 * If c is not found, NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0') {
if (*s == c) {
return s;
}
s++;
}
return (*s == c) ? s : NULL;
}

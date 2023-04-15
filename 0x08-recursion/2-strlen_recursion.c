#include "main.h"
/**
 * _strlen_recursion - A function that returns
 * the length of a string.
 * @s: This is the string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int lengthOfString = 0;
if (*s)
{
lengthOfString++;
lengthOfString += _strlen_recursion(s + 1);
}
return (lengthOfString);
}

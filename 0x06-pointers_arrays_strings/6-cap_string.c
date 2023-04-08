#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @capstr: The string to be capitalized
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *capstr)
{
int index = 0;
while (capstr[index])
{
while (!(capstr[index] >= 'a' && capstr[index] <= 'z'))
index++;
if (capstr[index - 1] == ' ' ||
capstr[index - 1] == '\t' ||
capstr[index - 1] == '\n' ||
capstr[index - 1] == ',' ||
capstr[index - 1] == ';' ||
capstr[index - 1] == '.' ||
capstr[index - 1] == '!' ||
capstr[index - 1] == '?' ||
capstr[index - 1] == '"' ||
capstr[index - 1] == '(' ||
capstr[index - 1] == ')' ||
capstr[index - 1] == '{' ||
capstr[index - 1] == '}' ||
index == 0)
capstr[index] -= 32;
index++;
}
return (capstr);
}

#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Copy to memory
 * @src: n bytes from memory area
 * @n: The function copies
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *dest_ptr = dest;
char *src_ptr = src;
for (i = 0; i < n; i++)
{
*dest_ptr++ = *src_ptr++;
}
return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that locates a substring.
 * @a: This is the matrix of integers
 * @size: This is the size of the matrix
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
/* sum of the main diagonal elements*/
sum1 += *(a + i * size + i);

/* sum of the secondary diagonal elements*/
sum2 += *(a + i * size + (size - i - 1));
}
printf("%d, %d\n", sum1, sum2);
}

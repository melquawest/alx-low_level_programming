#include "main.h"

/**
 * _pow_recursion - A fucbtion returns the value
 * of x raised to the power of y.
 * @x: The value x
 * @y: The power raised to
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

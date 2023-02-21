#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
		_putchar('0' + i % 10);
		return (i % 10);
	}
	else
	{
		int a = -(i % 10);

	_putchar(a + '0');
	return (a + '0');
	}
}

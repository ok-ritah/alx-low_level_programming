#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints out all single digit numbers
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}

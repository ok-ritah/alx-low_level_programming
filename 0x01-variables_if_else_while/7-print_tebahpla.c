#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

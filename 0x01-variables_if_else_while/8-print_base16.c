#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the numbers of base sixteen in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch < 16)
	{
		if (ch < 10)
		{
			putchar(ch);
		}
		else
		{
			putchar(ch - 10);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}


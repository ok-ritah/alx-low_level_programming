#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
			putchar(j);
			putchar(' ');
			j++;
		}
		i++;
	}
	return (0);
}

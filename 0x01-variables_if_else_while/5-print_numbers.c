#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints out all single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", i);
	}
	putchar('\n');
	return (0);
}

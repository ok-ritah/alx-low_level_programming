#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all the numbers of base sixteen in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}


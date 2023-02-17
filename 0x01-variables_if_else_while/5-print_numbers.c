#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints out all single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		printf("%d\n", ch);
		ch++;
	}
	return (0);
}

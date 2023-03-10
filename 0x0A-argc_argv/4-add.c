#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define _OPEN_SYS_ITOA_EXT

/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0
		int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) == strlen(itoa(atoi(argv[i]))))
		{
			printf("%s, is an integer\n", argv[i]);
		}
		/*
		 * temp = atoi(argv[i]);
		 * printf("%d, is an integer\n", temp);
		 * if (temp == 0 && argv[i] != "0")
		 {
		  printf("Error\n");
		  return (1);
		 }
		 */

		/*
		 * if (isdigit(atoi(argv[i])))
		 {
		  printf("%s, is an integer\n", argv[i]);
		 }
		 */

		/*
		 * if (isdigit(atoi(argv[i])))
		 {
			printf("argument %s is an integer\n", argv[i]);
			*/
		sum += atoi(argv[i])
			/*
			}
		else if (!(isdigit(atoi(argv[i]))))
		{
			printf("argument %s is not an integer\n", argv[i]);
			printf("Error\n");
			return (1);
		}
		*/
	}
	printf("%d\n", sum);
	return (0);
}

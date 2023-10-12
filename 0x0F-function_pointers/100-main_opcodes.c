#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes of the program
 * @a: address of the main function
 * @n: numbers og bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%.2hhx", a[i]);
	if  (i < n - 1)
		printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of the its own function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int n;

	if (argc != 2)
	{
	printf("ERROR\n");
	exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("ERROR\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

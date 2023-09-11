#include <stdio.h>

/**
 * main - main is a function that prints the sizes
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char:%lu byte(s)", sizeof(char));
	printf("size ofan int:%lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of  long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}

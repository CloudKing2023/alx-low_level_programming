#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 *
 */

int main(void)

{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizof(long long int));
	printf("Size of a float: %lu byte(s)", sizof(float));

	return (0);
}

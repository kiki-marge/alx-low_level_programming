#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %i byte(s)\n", (int) sizeof(char));
	printf("Size of int: %i byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %i byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", (int) sizeof(float));
	return (0);
}

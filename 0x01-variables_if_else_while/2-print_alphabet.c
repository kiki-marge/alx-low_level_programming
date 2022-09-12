#include <stdio.h>
#include <stdlib.h>
/*
 *Description: main - main block
 * Description: Program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - main block
 * Description: Prints all numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int i = '48';

	while (i <= '58')
	{
		putchar(i);
		i++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

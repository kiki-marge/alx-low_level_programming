#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Prints all numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int i= '48';

	while (i < '58')
	{
		putchar(i);
		i++;
	}

	char d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}

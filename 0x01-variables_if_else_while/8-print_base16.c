#include <stdio.h>
/**
 * main - main block
 * Description: Prints all numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);

		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');
	return (0);
}

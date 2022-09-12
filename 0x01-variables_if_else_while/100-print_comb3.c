#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: Prints all possible different combinations
 * of two digits
 * Return: 0
 */
int main(void)
{
	int i;
	int d = 0;

	while (d < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (d != i && d < i)
			{
				putchar('0' + d);
				putchar('0' + i);

				if (i + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++
		}
		d++
	}
	putchar('\n');
	return (0);
}

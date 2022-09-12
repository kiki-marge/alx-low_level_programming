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
	int i=0;
	int d;

	while (i <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (i != d && i < d)
			{
				putchar(i + 48);
				putchar(d + 48);

				if (i + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

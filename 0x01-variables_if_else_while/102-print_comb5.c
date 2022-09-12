#include <stdio.h>
/**
 * main -main block
 * Description: Prints all possible combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int a;

	while (i <= 99)
	{
		a = i;
		while (a <= 99)
		{
			if (a != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);

				if (i != 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++a;
		}
		++i;
	}
	putchar('\n');
	return (0);
}

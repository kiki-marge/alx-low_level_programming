#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible combinations of
 * single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i =0;

	while (i <= 0)
	{
		putchar(i + 48);

		if (i !=9)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}

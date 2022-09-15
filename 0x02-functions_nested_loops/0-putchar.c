#include "main.h"
/**
 * main - main block
 * Description: Program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char c[10] = "_putchar";
	int i = 0;
	for (i = 0; i < 8; i++)
	{
	_putchar(c[i]);
	}

	_putchar('\n');
	return (0);
}

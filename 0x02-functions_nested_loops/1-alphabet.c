#include "main.h"
/**
 * main - main block
 * Description: prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}

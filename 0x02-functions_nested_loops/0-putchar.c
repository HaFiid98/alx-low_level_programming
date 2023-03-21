#include "main.h"
/**
 * main - The entry point of my program
 *
 * Description: The program prints _putchar
 * followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	char pt[15] = "_putchar";

	while (pt[n] != '\0')
	{
		_putchar(pt[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}

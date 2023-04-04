#include"main.h"
/**
 * print_number - function that prints an integer using putchar
 *
 * @n : is the integer
 *
 * Return: nothing bitch
 */
void print_number(int n)
{
	unsigned int k;
	/**while(c != 0)
	{
		c = c / 10;
		i++;
		*/
		if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
		k = n;
	
	if (k >= 1000)
	{
		_putchar(k / 1000);
		_putchar((k / 100) % 10);
		_putchar((k / 10) % 10);
		_putchar(k % 10);

	}
	else if ((n R>= 100) && (k < 1000))
	{
		_putchar(n / 100);
		_putchar((n / 10) % 10);
		_putchar(n % 10);
	}
	else if ((n < 100) && n >= 10)
	{
		_putchar(n / 10);
		_putchar(n % 10);
	}
	else 
		_putchar(n);
}

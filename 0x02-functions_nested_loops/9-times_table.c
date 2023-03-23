#include "main.h"
/**
 * times_table - prints 9 times table, starting with 0.
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void times_table(void)
{
int j;
int i;
int c;

for (i = 0 ; i <= 9 ; i++)
{
        for (j = 0 ; j <= 9 ; j++)
        {
                c= (i*j);
                _putchar(c + 48 );
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
        }
        _putchar('\n');
}
}

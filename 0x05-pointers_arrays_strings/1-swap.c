#include"main.h"
/**
 * swap_int - swap two values of integers
 *
 * @a : first int
 *
 * @b : second int
 *
 * return : nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

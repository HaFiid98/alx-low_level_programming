#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute the fucntion given to the arr
 * @size: size of array
 * @action: is the fucntion
 * @array: is the array given
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

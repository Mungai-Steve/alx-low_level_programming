#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - execute `action' on every element of the `array'
 * @array: array to iterate through
 * @size: size of array
 * @action: function that will call elements of `array'
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (action == NULL || array == NULL || size == 0)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; ++i)
		action(array[i]);
}

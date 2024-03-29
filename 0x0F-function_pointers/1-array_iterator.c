#include<stdio.h>
/**
 *array_iterator -  function that executes a function given
 *@array : name of the array
 *@size : sizer of the array
 *@action : pointer to  function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}


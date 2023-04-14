Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
************************************
Write a function that reallocates a memory block using malloc and free

Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don’t forget to free ptr when it makes sense
FYI: The standard library provides a different function: realloc. Run man realloc to learn more.
***********************************************
Write a program that multiplies two positive numbers.

Usage: mul num1 num2
num1 and num2 will be passed in base 10
Print the result, followed by a new line
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
You are allowed to use more than 5 functions in your file
You can use bc (man bc) to check your results.

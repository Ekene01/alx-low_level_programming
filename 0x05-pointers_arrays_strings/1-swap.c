#include "main.h"
/**
* swap_int - A function that swaps the values of two integers
*
* @a: One of the numbers to be swapped
* @b: The second number to be swapped
*
* Return: 0
*/
void swap_int (int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}

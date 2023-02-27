#include "main.h"

/**
* swap_int - swap the value of two integer
* @a: int one
* @b: int two
* Return: 0
*/
void swap_int(int *a, int *b)
{
int s = *a;
*a = *b;
*b = s;
}

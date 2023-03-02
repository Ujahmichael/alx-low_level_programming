#include "main.h"

/**
* reverse_array - reverse content of an array
* @a: array
* @n: number of element
* Return: 0
*/
void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < (n - 1) / 2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}

#include <stdio.h>
#include "main.h"

/**
* print_diagsums - print  sum of 2 diagonal of a square matrix of int
* @a: array
* @size: size
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int i, n, s1 = 0, s2 = 0;

for (i = 0; i <= (size * size); i += size + 1)
s1 += a[i];

for (n = size - 1; n <= (size * size) - size; n += size - 1)
s2 += a[n];
printf("%d, %d\n", s1, s2);
}

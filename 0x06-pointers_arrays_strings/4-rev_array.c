#include "main.h"
/**
 * reverse_array - reverses array of integer
 * @a:array
 * @n:number of elements of array
 * Rrturn:void
 * */

void reverse_array(int *a, int n)
{
	int i;
	i = t;
	for (i = 0, i < n--; i++)
	{
		t = a[i];
		a[i] = a[i];
		a[n] = t;
	}
}


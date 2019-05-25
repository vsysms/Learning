/*
 * Array.c
 *
 *  Created on: May 25, 2019
 *      Author: vivia
 */

#include <stdio.h>

int main()
{
	int arr[5];
	arr[0] = 1;
	arr[2] = -2;
	arr[3 / 2] = 1; // Same as arr[1] = 1
	arr[3] = arr[0];

	printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

	// Shows that C arrays do not check if the index is out of bounds.
	printf("Garbage: %d ", arr[-4]);

	// Shows that arrays can be initialized outside of a specified size.
	int arr2[2] = { 1, 2, 3, 4, 5 };

	printf("Garbage: %d", arr2[3]);

	int arr3[6], i;

	// Shows that array values are stored in contiguous locations.
	printf("Size of integer for this compiler is %lu\n", sizeof(int));

	for (i = 0; i < 6; i++)
		printf("Address arr3[%d] is %p\n", i, &arr[i]);

	return 0;
}


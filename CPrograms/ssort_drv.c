#include <stdio.h>
#include "ssort.h"
#define SIZE 8

int main(void) {
	int myArray[] = { 3, 1, 4, 1, 5, 9, 2, 6};
	int i;

	printf("%s\n", "Unsorted array:");
	for (i = 0; i < SIZE; i++) {
		printf("%d: %d\n", i, myArray[i]);
	}

	selectionSort(myArray, SIZE);

	printf("\n%s\n", "Sorted array:");
	for (i = 0; i < SIZE; i++) {
		printf("%d: %d\n", i, myArray[i]);
	}	

	return 0;
}

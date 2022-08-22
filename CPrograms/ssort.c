
/* returns the index of the largest value in myArray, 
 * up to index size
 */
int indexOfLargest(int myArray[], int size) {
	int index=0;
	int i;

	for (i = 1; i < size; ++i) {
		if (myArray[i] > myArray[index])
			index = i;
	}
	return index;
}

void selectionSort(int myArray[], int size) {
	int last;

	for (last = size - 1; last >= 1; last--) {
		int largest = indexOfLargest(myArray, last+1);
		int tmp = myArray[largest];
		myArray[largest] = myArray[last];
		myArray[last] = tmp;
	}
}
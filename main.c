#include <stdio.h>


int binarySearch(int value, int array[], int size);
int recusiveBinarySearch(int value, int array[], int first, int last, int size);
int main() {
	int array[] = { 1,2,3,7,10 };

	printf("%d", binarySearch(-7, array, (sizeof(array) / sizeof(array[0]))));

	return 0;
}
int binarySearch(int value, int array[], int size) {
	return recusiveBinarySearch(value, array, 0, size, size);
}
int recusiveBinarySearch(int value, int array[], int first, int last, int size) {
	int pointer = ((last + first) / 2);
	if (array[pointer] == value) {
		return pointer;
	}
	if (first > last) {
		return -1;
	}
	if (array[pointer] < value) {
		return recusiveBinarySearch(value, array, pointer+1, last,size);
	}
	return recusiveBinarySearch(value, array, first, pointer-1,size);
}

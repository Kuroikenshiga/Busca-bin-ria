#include <stdio.h>


int binarySearch(int value, int array[], int size);
int recusiveBinarySearch(int value, int array[], int first, int last, int size);
int main() {
	int array[100];
	for (int i = 0; i < sizeof(array) / sizeof(array[0]);i++) {
		array[i] = i;
	}

	printf("%d", binarySearch(56, array, (sizeof(array) / sizeof(array[0]))));

	return 0;
}
int binarySearch(int value, int array[], int size) {
	return recusiveBinarySearch(value, array, 0, size, size);
}
int recusiveBinarySearch(int value, int array[], int first, int last, int size) {
	int pointer = (last + first) / 2;
	if (array[pointer] == value) {
		return (last + first) / 2;
	}
	if (pointer == 0 || pointer == size-1){
		return -1;
	}
	if (array[pointer] < value) {
		return recusiveBinarySearch(value, array, pointer, last,size);
	}
	return recusiveBinarySearch(value, array, first, pointer,size);
}

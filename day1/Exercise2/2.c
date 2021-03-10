#include <stdio.h>
int main() {

	int n = 0;
	int size = 5;
	int array[size];

	do {
		array[n] = n;
		n++;
	} while (n < size);

	n = 0;
	printf("Heres the array: ");
	do {
		printf("%d ", array[n]);
		n++;
	} while (n < size);
	printf("\n");

	return 0;
}
# SOLUTIONS Exercise 2

## Exercise 2b

```c
#include <stdio.h>
int main() {
	int number = 5;

	printf("Is the integer bigger than 0?\n");

	if (number > 0) {
		printf("The number IS bigger than 0\n");
	}
}

```

## Exercise 2c

```c
#include <stdio.h>
int main() {
	int number = 5;

	printf("Is the integer bigger than 0?\n");

	if (number < 0) {
		printf("The number is NOT bigger than 0\n");
	} else {
		printf("The number IS bigger than 0\n");
	}
}
```

## Exercise 2d

```c
#include <stdio.h>
int main() {
	int i;

	printf("I will print until I hit 0:\n");
	for (i = 10; i > 0; i--) {
		printf("%d\n", i);
	}
	return 0;
}
```


## Exercise 2e
```c
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
```
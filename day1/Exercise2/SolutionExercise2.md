# SOLUTIONS Exercise 2

## Exercise 2b

```c
#include <stdio.h>
int main() {
	int number = 5;

	printf("Is %d bigger than 0?\n", number);

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

	printf("Is %d bigger than 0?\n", number);

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
	for (i = 10; i > 0; i--) { // or >=, depending on how you read it.
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

## Exercise 2f
```c
#include <stdio.h>

void funtion() {
  printf("it works!\n");
}

int main() {
	funtion();
	return 0;
}
```

## Exercise 2g
```c
#include <stdio.h>

int fib(int n) {
	int f[n + 1];
	int i;

	f[0] = 0;
	f[1] = 1;

	for (i = 2; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}

	return f[n];
}

int main() {

	int n = 0;
	
	printf("Do you know the 10 first Fibonacci numbers?\n");
	do {
		printf("%d ", fib(n));
		n++;
	} while (n < 10);
	printf("\n");

	return 0;
}
```
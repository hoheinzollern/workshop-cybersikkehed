# Exercise 2: C programs

Welcome to the 2nd exercise of today. Here, we will learn about the C language, with a focus on how to compile a c program, and how to use `conditionals`, `loops` and `functions`. 

<b>Useful links:</b>
* [C documentation](https://devdocs.io/c/)

## Exercise 2a
First, we are going to create our very own C program. 

If this feels ridiculously easy, go on the hunt in the documentation and find something fun to implement.
* Open your favorite IDE
* Create a new file, 2a.c, then write
```c
#include<stdio.h>
int main()
{
    printf("it works!\n");
    return 0;
}
```
* Now we want to see it in action!
* Open your terminal and write
```shell
gcc 2a.c -o 2a.c
```
* `-o` is a way to compile our code into a specific name.
* Now, you can run the code by writing
```shell
./2a
```
* And so, you've made your first C program.
* This is how you are going to write and compile the rest of the exercises in Ex02!


## Exercise 2b
Now, we will jump into some *Conditionals*. If you are familiar with programming, you have probably used them before. 

You will have to finish this piece of code, then compile it and see if it runs correctly. Whenever you see `*BLANK*`, you will fill in correct code.
<details>
<summary>Hint</summary>

<i>Hint: If you are unsure what to do, try and write out the code as is in a new file, then compile. What does it say? </i>
</details>

```c
#include <stdio.h>
int main() {
	int number = 5;

	printf("Is %d bigger than 0?\n", number);

	if (number *BLANK* 0) {
		printf("The number IS bigger than 0\n");
	}
}

```
## Exercise 2c
We continue with the conditionals, finish the code, compile and review.
<details>
<summary>Hint</summary>
<i>Hint: You might want to reverse your ealier answer. </i>
</details>

```c
#include <stdio.h>
int main() {
	int number = 5;

	printf("Is %d bigger than 0?\n", number);

	if (number *BLANK* 0) {
		printf("The number is NOT bigger than 0\n");
	} *BLANK* {
		printf("The number IS bigger than 0\n");
	}
}
```
## Exercise 2d
For the next two exercises, we are going to handle some *Loops*. Very common and used in most imperative code. Here, we see the `for-loop`. Finish, compile, review.
<details>
<summary>Hint</summary>
<i>Hint: We count in reverse, hence `i` starts high, then descends.</i>
</details>

```c
#include <stdio.h>
int main() {
	int i;

	printf("I will print until I hit 0:\n");
	for (i = 10; i *BLANK* 0; i *BLANK*) {
		printf("%d\n", i);
	}
	return 0;
}
```
## Exercise 2e
We stay with the loops for another piece. Again fill in the blanks, compile and review. This time, we dive down into the `while-loop`, I chose to use the `do..while`, since I found it to be a fun variant. 
<details>
<summary>Hint</summary>
<i>Hint: If you are unsure about this one, try googling `do while C code`.</i>
</details>

```c
#include <stdio.h>
int main() {

	int n = 0;
	int size = 5;
	int array[size];

	do {
		array[n] = n;
		*BLANK*++;
	} while (n < size);

	n = 0;
	printf("Heres the array: ");

	*BLANK* {
		printf("%d ", array[n]);
		*BLANK*++;
	} while (n < size);
	printf("\n");

	return 0;
}

```
## Exercise 2f
For the last two exerices, we will tackle some *functions* in C. 

As you've done before, go through the code, see whats missing, fill in the blanks, compile and review.
<details>
<summary>Hint</summary>
<i>Hint: Not much different from our `2a`.</i>
</details>

```c
#include <stdio.h>

void funtion() {
  printf("it works!\n");
}

int main() {
	*BLANK*();
	return 0;
}
```
## Exercise 2g
The very last exercise. Can you see whats missing? <br> 
<details>
<summary>Hint</summary>
<i>Hint: The most important set of numbers in a programmers life. </i>
</details>

```c
#include <stdio.h>

int fib(int n) {
	int f[n + 1];
	*BLANK*

	f[0] = 0;
	f[1] = 1;

	*BLANK* (i = 2; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}

	return *BLANK*;
}

int main() {

	int n = 0;
	
	printf("Do you know the 10 first Fibonacci numbers?\n");
	do {
		printf("%d ", fib(n));
		n++;
	} *BLANK* (n < 10);
	printf("\n");

	return 0;
}
```

*(Exercises by EmiHaze)*
# Exercise 3: Hardware

## 3.a
How might the stack look at each line of execution in the following program?
```c
int foo(int a, int b) {
    return a+b;
}
int main() {
    int a = 1;
    int b = 1;
    foo(a, b);
}
```
Use `gdb` to find out!

## 3.b

Compile your programs from Exercise 2 with debug information:
`gcc file.c -o file -g`

## 3.c

Run your programs from Exercise 2 with `gdb`. How does the stack and registers look like at each step of execution?

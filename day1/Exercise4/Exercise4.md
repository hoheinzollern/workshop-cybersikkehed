# Exercise 4: ISA

Hello and welcome to the 4th exercise in the workshop. This exercise will help you understand and read assembly.
Please feel free to use any online resources you find necessary.

<b>Useful links:</b>
* [x86 Assembly Cheat Sheat](http://www.jegerlehner.ch/intel/IntelCodeTable.pdf)

## Exercise 4a
Select three or more of the following instructions and explain what they do: </br>
<i>mov, cmp, add, inc, shl, shr, jmp, mul, sub</i>

## Exercise 4b
The initial value of eax is 0x2. What is the value of eax after running the instructions?
```
    add   eax,1
    add   eax,eax
    add   eax,eax
```
## Exercise 4c
The initial value of eax is 0x5. What is the value of eax after running the instructions?
```
    mov   ecx,eax
    add   ecx,ecx 
    add   ecx,eax 
    add   ecx,3   
    mov   eax,ecx
```
## Exercise 4d
What does the following instructions do? What happens if you change the initial value of eax?<br>
<details>
<summary>Hint</summary>
<i>Try with a few examples of input and output values of eax.</i>
</details>

```
    mov   edx,eax 
    add   edx,edx 
    add   edx,edx 
    add   edx,edx 
    sub   edx,eax 
    mov   eax,edx 
```
## Exercise 4e
What does the following instructions do?<br>
Assume the initial value of eax is 4. What is the value of eax after running the instructions?<br>
What if the initial value is 1?<br>
<details>
<summary>Hint</summary>
<i>"g" means greater and "l" means less.</i>
</details>

``` 
    add   eax,2 
    cmp   eax,4 
    subg  eax,2 
    addl  eax,4 
```
## Exercise 4f
What does the following instructions do?<br>
Assume the initial value of eax is 4.  What is the value of eax after running the instructions?<br>
What if the initial value is 6?<br>
<details>
<summary>Hint</summary>
<i>"j" stands for jump.</i>
</details>

``` 
_start:
    sub   eax,2 
    cmp   eax,4 
    jl    function
    ret
function:
    add  eax,4
    ret

```
## Exercise 4g
What is the value of eax after running the instructions? <br> 
<details>
<summary>Hint</summary>
<i>Hint: You might need to convert 0xA into binary.</i>
</details>

``` 
    mov   eax,0xA 
    shl   eax,2  
```

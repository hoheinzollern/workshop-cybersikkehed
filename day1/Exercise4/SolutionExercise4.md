# Solutions for Exercise 4: ISA

Hello and welcome to the 4th exercise in the workshop. This exercise will help you understand and read assembly.
Please feel free to use any online resources you find necessary.


<b>Usefull links:</b>
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
<ins>Solution: 12 or 0xC</ins>
## Exercise 4c
The initial value of eax is 0x5. What is the value of eax after running the instructions?
```
    mov   ecx,eax
    add   ecx,ecx 
    add   ecx,eax 
    add   ecx,3   
    mov   eax,ecx
```
<ins>Solution: 18
## Exercise 4d
What does the following instructions do? What happens if you change the initial value of eax? <br>
<i>Hint: Try with a few examples of input and output values of eax.</i>
```
    mov   edx,eax 
    add   edx,edx 
    add   edx,edx 
    add   edx,edx 
    sub   edx,eax 
    mov   eax,edx 
```
<ins>Solution: Output is 7 times the input
## Exercise 4e
What does the following instructions do?<br>
Assume the initial value of eax is 4. What is the value of eax after running the instructions?<br>
What if the initial value is 1?<br>
<i>Hint: "g" means greater than and "l" means less than.</i>
``` 
    add   eax,2 
    cmp   eax,4 
    subg  eax,2 
    addl  eax,4 
```
<ins>Solution: 4 -> 4, 1 -> 5
## Exercise 4f
What does the following instructions do?<br>
Assume the initial value of eax is 4.  What is the value of eax after running the instructions?<br>
What if the initial value is 6?<br>
<i>Hint: "j" stands for jump</i>
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
<ins>Solution: 6 -> 4, 4 -> 6
## Exercise 4g
What is the value of eax after running the instructions? <br> 
<i>Hint: You might need to convert 0xA into binary</i>
``` 
    mov   eax,0xA 
    shl   eax,2  
```
<ins>Solution: Binary value of 0xA is 1010. 101000 is 0x28 in hex</ins>
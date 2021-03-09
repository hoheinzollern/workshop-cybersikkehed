# Exercise 5: Program graphs and program representations
## 5.0
Try compile the c-programs you made in the previous exercises. Then open the binary with cutter and select the Graph tab (in the bottom). Navigate to the main function in the left-hand side. Try with different files and see how the graphs differ.<br>
If your c-program has an if-statement or a function call the graphs are probably more interesting.

## 5.1:
Open the binary with cutter and select the Graph tab (in the bottom). Navigate to the main function in the left-hand side.<br>
What does the main function do? Try avoid looking at the Decompiler tab for now. <i>Hint: shl is "shift left"</i>

## 5.2
Run the binary.<br>
Why is "Hello" always printed? Look at the graph and find out what condition must hold in order for "Hello" to be printed.<br>
What instruction should be changed and what should the new value be such that "Hello" is not printed?

## 5.3
Run the binary.<br>
What block is responsible for printing the numbers? <br>
Why do we reach this block 10 times? What instructions in the graph ensure that we loop 10 times? <i>Hint: There are 3 instructions and they all have the same left operand. They correspond to the three parts of a for-loop: for(int i=0; i<10; i++)</i>

## 5.4
Look at the main graph in cutter.<br>
What must hold for the "Correct" string to be printed? What value must the register being compared with have? <i>Hint: Look at the instruction at the end of the first block. Scanf reads the input of the user</i><br>
Run the binary and try to get the program to print the "Correct" string.

## 5.5
Open the main graph in cutter.<br>
What happens within the block that is reached if "jle 0x1148" is true?<br>
What number sequence does this produce?<br>
What number does main return?
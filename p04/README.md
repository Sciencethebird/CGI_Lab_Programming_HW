Problem 4 EOF
===

About this problem
---
- value of character
- [reference](https://stackoverflow.com/questions/4705968/what-is-value-of-eof-and-0-in-c)

Output
---
```
count = 255
```
- the character count is not 256 since the value of EOF is -1, 
  causing `c = fgetc(fp)) != EOF` not counting char with value -1
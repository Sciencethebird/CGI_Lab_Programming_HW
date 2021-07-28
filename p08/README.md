Problem 8 EOL in windows
===

Note
---
- On Linux(MAC)
    - 17 bytes, there're total of 17 characters (char size is 1 byte) 
- On Windows (VSstudio)
    - 19 bytes, since the '\n' is actually '\n\r'
- Output Explained
    - [Reference](https://unix.stackexchange.com/questions/608267/is-a-text-file-bigger-on-windows-than-on-linux-because-of-carriage-return)
    - [Windows EOL](https://www.loginradius.com/blog/async/eol-end-of-line-or-newline-characters/)
    - in Windows systems, `\n\r` is used as the end of the line character, so every '\n' in your prgram be replaced by '\n\r'(2 byte). 
Output
---
```sh
hello
hellohello

# On MAC: 17 byte
# On Windows: 19 byte because of the '\n\r' EOL character
```
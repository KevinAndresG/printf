# OUR OWN **PRINTF** FUNCTION. 👽 #

###### This project is about the creation of a function equal to the existing printf, in which we create files and functions for each format (type of variable) including error and success cases. ######

# REQUIREMENTS. 📎📢 #

## GENERAL. 📋 ##

Allowed editors: vi, vim, emacs  
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
-std=gnu89  
All your files should end with a new line  
A README.md file, at the root of the folder of the project is mandatory  
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl  
You are not allowed to use global variables  
No more than 5 functions per file  
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you  don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples  
The prototypes of all your functions should be included in your header file called holberton.h  
Don’t forget to push your header file  
All your header files should be include guarded  
Note that we will not provide the _putchar function for this project  

## ✔📒AUTHORIZED FUNCTIONS AND MACROS📒✔ ##

write (man 2 write)  
malloc (man 3 malloc)  
free (man 3 free)  
va_start (man 3 va_start)  
va_end (man 3 va_end)  
va_copy (man 3 va_copy)  
va_arg (man 3 va_arg)  

## COMPILATION 🌐🌐🌐 ##

THE CODE IS COMPILED WITH THESE FLAGS : "gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c"
AND TO COMPARE OUR FUNCTION WITH THE ORIGINAL PRINTF WE HAVE TO USE THAT OTHER FLAG -Wno-format

## OUR PROTOTYPE 📑 ##

**int _printf(const char *format, ...);**, DESCRIBING THE PROTOTYPE: **INT**(RETURN THE NUMBER OF PRINTED CHARACTERS) **_PRINTF**(PRODUCE THE OUTPUT OF THE CODE) **FORMAT**(THE STRING OF CHARACTERS PASED BY THE USER)

## BUILDED WITH 🛠️ ##

VISUAL STUDIO CODE🔵IN C LANGUAGE ⚡

## AUTHORS ▼ ▼✍📝▼ ▼  ##

KENIA LOPEZ - KEVIN GARCIA
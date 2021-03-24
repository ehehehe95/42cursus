# printf

## Because putnbr and putstr aren’t enough

_Summary: This project is pretty straight forward. You will recode printf. Hopefully you
will be able to reuse it in future project without the fear of being flagged as a cheater.
You will mainly learn how to use variadic arguments._

# Chapter I

# Introduction

The versatility of theprintffunction inCrepresents a great exercise in programming for
us. This project is of moderate difficulty. It will enable you to discover variadic functions
inC.
The key to a successfulft_printfis a well-structured and good extensible code.

# Chapter II

# Mandatory part

```
Program name libftprintf.a
Turn in files *.c, */*.c, *.h, */*.h, Makefile
Makefile all, clean, fclean, re, bonus
External functs. malloc, free, write, va_start, va_arg, va_copy,
va_end
Libft authorized yes
Description Write a library that contains ft_printf, a function
that will mimic the real printf
```
- The prototype of ft_printf should beint ft_printf(const char *, ...);
- You have to recode thelibc’sprintffunction
- It must not do the buffer management like the realprintf
- It will manage the following conversions: cspdiuxX%
- It will manage any combination of the following flags: ’-0.*’ and minimum field
    width with all conversions
- It will be compared with the real printf
- You must use the commandarto create your librairy, using the commandlibtool
    is forbidden.

```
man 3 printf / man 3 stdarg
```

# Get Next Line

## Reading a line on a fd is way too tedious

_Summary: The aim of this project is to make you code a function that returns a line
ending with a newline, read from a file descriptor._

# Goals

This project will not only allow you to add a very convenient function to your collection,
but it will also allow you to learn a highly interesting new concept inCprogramming:
static variables.

# Mandatory part - Get_next_line

```
Function name get_next_line
Prototype int get_next_line(int fd, char **line);
Turn in files get_next_line.c, get_next_line_utils.c,
get_next_line.h
Parameters #1. file descriptor for reading
#2. The value of what has been read
Return value 1 : A line has been read
0 : EOF has been reached
-1 : An error happened
External functs. read, malloc, free
Description Write a function which returns a line read from a
file descriptor, without the newline.
```
- Calling your functionget_next_linein a loop will then allow you to read the text
    available on a file descriptor one line at a time until the EOF.
- Make sure that your function behaves well when it reads from a file and when it
    reads from the standard input.
- libftis not allowed for this project. You must add aget_next_line_utils.cfile
    which will contain the functions that are needed for your get_next_line to work.
- Your program must compile with the flag-D BUFFER_SIZE=xx. which will be used
    as the buffer size for the read calls in your get_next_line. This value will be
    modified by your evaluators and by moulinette.
- Compilation will be done this way :gcc -Wall -Wextra -Werror -D BUFFER_SIZE=
    get_next_line.c get_next_line_utils.c
- Yourreadmust use the BUFFER_SIZE defined during compilation to read from
    a file or from stdin.
- In the header fileget_next_line.hyou must have at least the prototype of the
    functionget_next_line.


Get Next Line Reading a line on a fd is way too tedious

```
Does your function still work if the BUFFER_SIZE value is 9999? And
if the BUFFER_SIZE value is 1? And 10000000? Do you know why?
```
```
You should try to read as little as possible each time get_next_line
is called. If you encounter a newline, you have to return the
current line. Don’t read the whole file and then process each line.
```
```
Don’t turn in your project without testing. There are many tests to
run, cover your bases. Try to read from a file, from a redirection,
from standard input. How does your program behave when you send a
newline to the standard output? And CTRL-D?
```
- We consider thatget_next_linehas an undefined behavior if, between two calls,
    the same file descriptor switches to a different file before EOF has been reached on
    the first fd.
- lseekis not an allowed function. File reading must be done only once.
- Finally we consider thatget_next_linehas an undefined behavior when reading
    from a binary file. However, if you wish, you can make this behavior coherent.
- Global variables are forbidden.

```
A good start would be to know what a static variable is:
https://en.wikipedia.org/wiki/Static_variable
```

# Bonus part

The projectget_next_lineis straightforward and leaves very little room for bonuses,
but I am sure that you have a lot of imagination. If you aced perfectly the mandatory
part, then by all means complete this bonus part to go further. I repeat, no bonus will
be taken into consideration if the mandatory part isn’t perfect.
Turn-in all 3 initial files with_bonusfor this part.

- To succeedget_next_linewith a single static variable.
- To be able to manage multiple file descriptor with yourget_next_line. For ex-
    ample, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call
    get_next_lineonce on 3, once on 4, once again on 3 then once on 5 etc. without
    losing the reading thread on each of the descriptors.



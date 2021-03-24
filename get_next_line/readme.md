

# Get Next Line

Reading a line on a fd is way too tedious

Summary: The aim of this project is to make you code a function that returns a line

ending with a newline, read from a ﬁle descriptor.

## Goals

This project will not only allow you to add a very convenient function to your collection,

but it will also allow you to learn a highly interesting new concept in C programming:

static variables.

## Mandatory part - Get\_next\_line

Function name

Prototype

get\_next\_line

int get\_next\_line(int fd, char \*\*line);

get\_next\_line.c, get\_next\_line\_utils.c,

get\_next\_line.h

Turn in ﬁles

Parameters

#1. file descriptor for reading

#2. The value of what has been read

1 : A line has been read

Return value

0 : EOF has been reached

-1 : An error happened

External functs.

~~Description~~

read, malloc, free

Write a function which returns a line read from a

file descriptor, without the newline.

• Calling your function get\_next\_line in a loop will then allow you to read the text

available on a ﬁle descriptor one line at a time until the EOF.

• Make sure that your function behaves well when it reads from a ﬁle and when it

reads from the standard input.

• libft is not allowed for this project. You must add a get\_next\_line\_utils.c ﬁle

which will contain the functions that are needed for your get\_next\_line to work.

• Your program must compile with the ﬂag -D BUFFER\_SIZE=xx. which will be used

as the buﬀer size for the read calls in your get\_next\_line. This value will be

modiﬁed by your evaluators and by moulinette.

• Compilation will be done this way : gcc -Wall -Wextra -Werror -D BUFFER\_SIZE=32

get\_next\_line.c get\_next\_line\_utils.c

• Your read must use the BUFFER\_SIZE deﬁned during compilation to read from

a ﬁle or from stdin.

• In the header ﬁle get\_next\_line.h you must have at least the prototype of the

function get\_next\_line.

Get Next Line

Reading a line on a fd is way too tedious

Does your function still work if the BUFFER\_SIZE value is 9999? And

if the BUFFER\_SIZE value is 1? And 10000000? Do you know why?

You should try to read as little as possible each time get\_next\_line

is called. If you encounter a newline, you have to return the

current line. Don’t read the whole file and then process each line.

Don’t turn in your project without testing. There are many tests to

run, cover your bases. Try to read from a file, from a redirection,

from standard input. How does your program behave when you send a

newline to the standard output? And CTRL-D?

• We consider that get\_next\_line has an undeﬁned behavior if, between two calls,

the same ﬁle descriptor switches to a diﬀerent ﬁle before EOF has been reached on

the ﬁrst fd.

• lseek is not an allowed function. File reading must be done only once.

• Finally we consider that get\_next\_line has an undeﬁned behavior when reading

from a binary ﬁle. However, if you wish, you can make this behavior coherent.

• Global variables are forbidden.

A good start would be to know what a static variable is:

Chapter IV

Bonus part

The project get\_next\_line is straightforward and leaves very little room for bonuses,

but I am sure that you have a lot of imagination. If you aced perfectly the mandatory

part, then by all means complete this bonus part to go further. I repeat, no bonus will

be taken into consideration if the mandatory part isn’t perfect.

Turn-in all 3 initial ﬁles with \_bonus for this part.

• To succeed get\_next\_line with a single static variable.

• To be able to manage multiple ﬁle descriptor with your get\_next\_line. For ex-

ample, if the ﬁle descriptors 3, 4 and 5 are accessible for reading, then you can call

get\_next\_line once on 3, once on 4, once again on 3 then once on 5 etc. without

losing the reading thread on each of the descriptors.

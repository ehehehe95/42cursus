

# Get Next Line

Summary: The aim of this project is to make you code a function that returns a line

ending with a newline, read from a ﬁle descriptor.


## ~~Description~~

use read, malloc, free Write a function which returns a line read from a file descriptor, without the newline.

• Calling your function get\_next\_line in a loop will then allow you to read the text available on a ﬁle descriptor one line at a time until the EOF.

• Make sure that your function behaves well when it reads from a ﬁle and when it reads from the standard input.

• libft is not allowed for this project. You must add a get\_next\_line\_utils.c ﬁle which will contain the functions that are needed for your get\_next\_line to work.

• Your program must compile with the ﬂag -D BUFFER\_SIZE=xx. which will be used as the buﬀer size for the read calls in your get\_next\_line. This value will be modiﬁed by your evaluators and by moulinette.

• Compilation will be done this way : gcc -Wall -Wextra -Werror -D BUFFER\_SIZE=32 get\_next\_line.c get\_next\_line\_utils.c

• Your read must use the BUFFER\_SIZE deﬁned during compilation to read from a ﬁle or from stdin.

• In the header ﬁle get\_next\_line.h you must have at least the prototype of the function get\_next\_line.

## Bonus part

• To succeed get\_next\_line with a single static variable.

• To be able to manage multiple ﬁle descriptor with your get\_next\_line. For example, if the ﬁle descriptors 3, 4 and 5 are accessible for reading, then you can call get\_next\_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

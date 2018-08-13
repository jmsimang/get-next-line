# get-next-line
This is the third project under the Algorithm branch of C Projects.
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

## learning outcomes
This project will allow you to learn a highly interesting new concept in C programming: Static Variables.

You will also gain a deeper understanding of allocations, whether they happen on the stack memory or in the heap memory, 
the manipulation and the life cycle of a buffer, 
the unexpected complexity implied in the use of one or many static variables.

## objectives
• Write a function that returns a line read from a file descriptor.
• What we call a “line” is a succession of characters that end with ’\n’ (ascii code
0x0a) or with End Of File (EOF).
• Your function must be prototyped as follow: int get_next_line(const int fd, char **line)
• The first parameter is the file descriptor that will be used to read.
• The second parameter is the address of a pointer to a character that will be used
to save the line read from the file descriptor.

• The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, 
or if an error has happened respectively.

• Your function get_next_line must return its result without ’\n’.

• Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

• Make sure that your function behaves well when it reads from a file, from the standard output, from a redirection etc.

• In you header file get_next_line.h you must have at least the prototype of the function get_next_line and a macro that allows to choose the size of the reading buffer for the read function. This value will be modified during the defence to evaluate the strength of your function. That macro must be named BUFF_SIZE.

• We consider that get_next_line has an undefined behavior if, between two calls, the same file descriptor designs two distinct files although the reading from the first file was not completed.

• We consider also that a call to lseek(2) will never take place between two calls of the function get_next_line on the same file descriptor.

• Finally we consider that get_next_line has an undefined behavior when reading from a binary file. However, if you wish, you can make this behavior coherent.

• Global variables are forbidden.
• Static variables are allowed.

## bonus part
• To be able to manage multiple file descriptor with your get_next_line. 
For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, 
once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

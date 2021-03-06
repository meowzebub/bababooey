#ifndef REDIRECT_H
#define REDIRECT_H

/* Takes in an array of strings and returns an integer.
The integer is the file descriptor. Depending if the person inputs
a >, <, or >>, it will redirect the stdout or stdin of the program
to the file given. If the person inputs a |, then the stdout for the
first program will be written to the stdin of the second program. */
int redirection(char **command);

#endif

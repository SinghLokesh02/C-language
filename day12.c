// Escape Sequence Characters

// Escape Sequence Characters are used to perform some specific task in C programming.
// Escape Sequence Characters are also known as Escape Characters.
// Escape Sequence Characters are used to format the output.
// The sequence of characters preceded by a backslash (\) is known as Escape Sequence Characters.
// The list of Escape Sequence Characters is given below:
// Escape Sequence Character	Meaning
// \n	New Line
// \t	Horizontal Tab
// \v	Vertical Tab
// \b	Backspace
// \r	Carriage Return
// \f	Form Feed
// \a	Alert or Beep

#include <stdio.h>
int main()
{
    // new line
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello Lokesh Singh\n\a");


    // tab
    printf("Hello\tWorld\n");


    // vertical tab
    printf("Hello\v\vWorld\n");


    // backspace
    printf("Hello\bWorld\n");


    // carriage return
    printf("Hello\rWorld\n");

    return 0;
}
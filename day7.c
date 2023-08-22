// Loops in C langugae

/*
Loops
Loops can execute a block of code as long as a specified condition is reached.
Loops are handy because they save time, reduce errors, and they make code more readable.
*/


#include<stdio.h>
int main()
{
// While Loop
// The while loop loops through a block of code as long as a specified condition is true:

printf("\n Exmaple of While loop in C\n");
int i = 0;
while (i < 5)
{
    printf("%d\n", i);
    i++;
}


// Do while loop
// The do...while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

printf("\n Exmaple of Do While loop in C\n");
int j = 0;
do
{
    printf("%d\n", j);
    j++;
} while (j < 5);


// For Loop
// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

printf("\n Exmaple of For loop in C\n");
for (int k = 0; k < 5; k++)
{
    printf("%d\n", k);
}



return 0;
}
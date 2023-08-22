// Break and Continue Statements

#include<stdio.h>
int main()
{
/*
Break
You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.
This example jumps out of the for loop when i is equal to 4:
*/     

printf("\n Exmaple of Break statement in C\n");
for (int i = 0; i < 10; i++)
{
    if (i == 4)
    {
        break;
    }
    printf("%d\n", i);
}


/*
Continue
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
This example skips the value of 4:
*/

printf("\n Exmaple of Continue statement in C\n");
for (int i = 0; i < 10; i++)
{
    if (i == 4)
    {
        continue;
    }
    printf("%d\n", i);
}


return 0;
}
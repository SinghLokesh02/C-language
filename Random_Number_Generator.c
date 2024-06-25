#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int random_number = (rand() % 100) + 1;
    printf("%d\n", random_number);
    int num;
    for (int i = 0; i < 10; i++)
    {

        printf("Guess the any number (1 to 100) :");
        scanf("%d", &num);

        if (num > random_number)
        {
            printf("Your number is Greater\n");
        }
        else if (num < random_number)
        {
            printf("Your number is Lesser\n");
        }
        else if (num == random_number)
        {
            printf("You win the Game\n");
        }
    }

    return 0;
}
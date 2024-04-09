/*
3) Write a Program to Print the Following Pattern.

For n = 5 (Take n as input from user)
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <stdio.h>
int main()
{
    int n,count = 1;
    printf("Enter the number of Row You want to Print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        count = 1;
        if(i%2 == 1){
            for(int j = 1;j<=i;j++){
                printf("%d ",count);
                if(count == 1)
                    count = 0;
                else
                    count = 1;
            }
        }
        else{
            count = 0;
            for(int j = 1;j<=i;j++){
                printf("%d ",count);
                if(count == 1)
                    count = 0;
                else
                    count = 1;
            }
        }

        printf("\n");
    }

    return 0;
}
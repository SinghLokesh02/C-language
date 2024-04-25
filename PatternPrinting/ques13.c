/*
For n = 5 (Take n as input from user)

    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
int main()
{

int n;
printf("Enter the Number of rows : ");
scanf("%d",&n);

for(int i = 1;i<=n;i++){
    // For space
    for(int space = 1;space<=n-i;space++){
        printf(" ");
    }

    // For stars
    for(int j = 1;j<=(2*i-1);j++){
        printf("*");
    }
    printf("\n");
}

return 0;
}
// print upto n

#include<stdio.h>
int i = 1;
void print_Upto_N(int x){
    if(i == x){
        return;
    }
    else{
        printf("%d ",i);
        i++;
        print_Upto_N(x);
    }
}
int main()
{

int x = 10;
print_Upto_N(x);
return 0;
}
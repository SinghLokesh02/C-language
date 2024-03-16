#include<stdio.h>
int main()
{
    enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum week today = Wed;
    printf("Day %d\n", today+1);
return 0;
}
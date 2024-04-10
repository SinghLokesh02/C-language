#include <stdio.h>



void printA()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1 || j==5 || i == 3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}



void printB()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1 || j==5 || i == 3 || i==5)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printC()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1  || i==5)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printD()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1  || i==5 || j==5)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printE()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1  || i==5 || i==3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printF()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1  || i==3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printG()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i==1 || j ==1  || (i==3&& j>2) || (i>=3&&j==5) || i ==5 || (i==4&&j==3))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printH()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || j ==5 || i==3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printI()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( i ==1  || i ==5 || j==3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printJ()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( i ==1  || j ==5 || i == 5 || (i>3 && j==1))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printL()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || i ==5  )
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printM()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || j == 5 || (i<=3 && i==j) || (i<=3 && i+j==6) )
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printN()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || j == 5 || (i==j))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printO()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j == 1  || i == 5 || j == 5 || i==1)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printP()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j == 1  || i == 3 || i == 1 || (j==5 && i<=3))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printQ()
{
    for (int i = 1; i <= 6; i++)
    {
        for(int j = 1;j<=6;j++){
            if( j == 1  || i == 5 || i == 1 || j == 5 ||(i>=3 && i==j))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printR()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j == 1  || i == 3 || i == 1 || (j==5 && i<=3) || (i>=3 && i==j))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printS()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( i ==1  || i == 3 || i==5 || (i<3 && j==1) || (i>3 && j ==5))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printT()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( i ==1  || j == 3)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printU()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || i == 5 || j==5)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printW()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( j ==1  || j == 5 || (i>=3 && i==j) || (i>=3 && i+j==6))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printX()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if(i ==j || i + j ==6)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printY()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if((i<=3 && i==j) || (i<=3 && i+j == 6) ||(i>3 && j == 3))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}


void printZ()
{
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1;j<=5;j++){
            if( i ==1 || i==5 ||  (i+j == 6))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    printA();
    printB();
    printC();
    printD();
    printE();
    printF();
    printG();
    printH();
    printI();
    printJ();
    printL();
    printM();
    printN();
    printO();
    printP();
    printQ();
    printR();
    printS();
    printT();
    printU();
    printW();
    printX();
    printY();
    printZ();

    return 0;
}
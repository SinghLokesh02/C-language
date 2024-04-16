// Factorial

#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n = 5;

    int ans = factorial(5);
    printf("%d", ans);
    return 0;
}
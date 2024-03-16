// ******************* Calloc Dynamic Array

#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation
int main()
{
    int n;
    int *arr;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    arr = (int *)calloc(n , sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element %d \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The Value of at index %d is %d \n", i + 1, arr[i]);
    }

    return 0;
}
// Dynamic Memory Allocation

/*
1) An statically alloacted variable or array has fixed size in memory

2) Dynamic memory allocation is the way in which the size of the data structure can be changed during run time

3) Memory assigned to the program in a typical architecture can be broken down into four segments

    1) Code

    2) Static / global variable

    3) Stack

    4) Heap

4) We have four function that helps in dynamic memory allocation

1) malloc
2) calloc
3) realloc
4) free
*/

// ******************* Malloc Dynamic Array

#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation
int main()
{
    int n;
    int *arr;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

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
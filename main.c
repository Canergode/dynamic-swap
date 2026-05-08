#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2, temp;

    // Allocate memory for two integers
    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));

    // Get values from user
    printf("First number:\n");
    scanf("%d", &(*ptr1));

    printf("Second number:\n");
    scanf("%d", &(*ptr2));

    printf("Before swap: num1 = %d  num2 = %d\n", *ptr1, *ptr2);

    // Swap values using temporary variable
    temp  = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swap:  num1 = %d  num2 = %d", *ptr1, *ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}

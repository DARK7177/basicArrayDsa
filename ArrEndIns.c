#include <stdio.h>

int main()
{
    int a[3], b = 0, lb, ub = 3, element;
    printf("Enter values in the array\n");
    for (b; b < ub; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("After insertion \n");
    for (b = 0; b < ub; b++)
    {
        printf("%d\n", a[b]);
    }
    // Now to insert element in the end of array we have to update the value of ub
    printf("Enter the last value you want to insert \n");
    scanf("%d", &element);
    ub++;
    a[ub - 1] = element;
    printf("Array after insertion at the end is :\n");
    for(b= 0 ; b <ub; b++)
    {
        printf("%d\n", a[b]);
    }

    return 0;
}
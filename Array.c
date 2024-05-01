// A program to explain traversing in a array

#include <stdio.h>

int main()
{
    int a[5], b;
    printf("Enter any 5 numbers for a array traversing\n");
    for (b = 0; b < 5; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("The number entered are : \n");
    for(b = 0; b < 5; b++)
    {
        printf("%d\n", a[b]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[10], b, element;
    printf("Insert 10 elements in the array\n");
    for (b = 0; b < 10; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("10 elements in the array\n");
    for (b = 0; b < 10; b++)
    {
        printf("%d\n", a[b]);
    }
    printf("Enter the element you want to search in an array\n");
    scanf("%d", &element);
    for (b = 0; b < 10; b++)
    {
        if (!(element != a[b]))
        {
            printf("The element found at %d position in the array\n", b + 1);
        }
        else if (b==9)
        {
            printf("Element not present in the array\n");
        }
    }
}
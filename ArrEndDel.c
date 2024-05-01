#include<stdio.h>

int main() {
    int a[3],lb=0,b,ub=2, element;
    printf("enter 3 no \n");
    for ( b = 0; b < 3; b++)
    {
        scanf("%d", &a[b]);
    }

    element = a[2];
    printf("The deleted element in the array is %d\n", element);
    for ( b = 0; b < ub; b++)
    {
        a[b] = a[b];
    }
    ub = ub -1;
    printf("Elements after deletion\n");
    for ( b = 0; b <= ub; b++)
    {
        printf("%d\n", a[b]);
    }
    
    return 0;
}
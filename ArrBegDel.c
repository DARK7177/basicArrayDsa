#include<stdio.h>

int main() {
    int a [3], b=0,lb=0,ub=2, element;
    printf("Enter 3 numbers\n");
    for ( b = 0; b < 3; b++)
    {
        scanf("%d", &a[b]);
    }
    printf("Entered Array is :\n");
    for ( b = 0; b < 3; b++)
    {
        printf("%d\n", a[b]);
    }
    element = a[0];
    printf("Deleted item is %d\n", element);
    for(b = lb; b<=ub ;b++){
        a[b]=a[b+1];
    }
    ub = ub-1;
    printf("Element after deletion\n");
    for(b=0;b<=ub;b++) {
        printf("%d\n", a[b]);
    }

    return 0;
}
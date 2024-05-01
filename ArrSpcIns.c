// Problem in this approach

#include<stdio.h>

int main() {
    int a[4],b=0 , lb=0 ,ub=4, element,location;
    printf("Enter 4 no\n");
    for ( b = 0; b <4; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("Elements before insertions\n");
        for ( b = 0; b <4; b++)
    {
        printf("%d\n", a[b]);
    }

    printf("Location in which you want your array to be inserted\n");
    scanf("%d", &location);
    ub++;
    a[ub];
    for(b <ub-1 ; b<location-1 ; b--){
        a[b+1] = a[b];
    }
    printf("Enter the element you want to insert\n");
    scanf("%d", &element);
    a[location-1]= element;
    printf("After insertion\n");
    for ( b = 0; b < ub; b++)
    {
        printf("%d\n", a[b]);
    }
    
    return 0;
}
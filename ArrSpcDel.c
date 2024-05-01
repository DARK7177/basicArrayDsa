#include<stdio.h>

int main() {
    int a [4] , b = 0 , lb=0 ,ub=3 , element , location;
    printf("Enter a array of 4 numbers\n");
    for ( b = 0; b < 4; b++)
    {
        scanf("%d", &a[b]);
    }

    printf("Array before deletion\n");
    for ( b = 0; b < 4; b++)
    {
        printf("%d\n", a[b]);
    }
    
    printf("Enter thje location whose element you want to delete\n");
    scanf("%d", &location);
    element = a[location-1];
    printf("The element deleted is %d", element);
    for(b = location - 1; b<ub;b++) {
        a[b]= a[b+1];
    }
    ub =ub-1;
    printf("The elements after the deletion\n");
    for ( b = 0; b <= ub; b++)
    {
        printf("%d\n", a[b]);
    }
    
}
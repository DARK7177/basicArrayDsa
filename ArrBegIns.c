// Program to insert array in the begning of array 

#include<stdio.h>

int main() {
    int a [3], b=0 , lb = 0 ,ub = 2, element;
    printf("Enter 3no elements \n");
    for(b ; b<3 ; b++) {
        scanf("%d", &a[b]);
    }

    printf("The elements before the insertions are\n");
    for(b=0; b<3 ;b++){
        printf("%d\n", a[b]);
    }

    ub = ub+1;
    for(b = ub ;b>=ub;b--) {
        a[b+1] = a[b];
        printf("Enter the value which you want to insert in the begning\n");
        scanf("%d", &element);
    }
        a[0]= element;
        printf("After Insertion\n");
        for(b=0; b<=ub;b++) {
            printf("%d\n", a[b]);
        }

    return 0;
}
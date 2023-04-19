#include<stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // int a = 5;
    // int b = 10;
    int a,b;
    printf("Enter value for a and b\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before swapping value of a and b : %d and %d \n", a, b);

    swap(&a,&b);

    printf("After swapping value of a and b : %d and %d \n", a, b);

}
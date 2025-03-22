#include <stdio.h>
#include <stdlib.h>
void main() {
    int a[100], size, i, temp;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the values: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("The values are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0;  i < size/2; i++){
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    printf("Reversed value: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
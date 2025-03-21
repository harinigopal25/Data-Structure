#include <stdio.h>
#include <stdlib.h>
void main() {
    int a[100], size, i, element, pos;
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
    printf("Enter the element: ");
    scanf("%d", &element);
    printf("Enter the position:");
    scanf("%d", &pos);
    if(pos < 1 || pos > size+1){
        printf("Invalid position");
    }
    for(i = size-1; i >= pos-1; i--){
        a[i+1] = a[i];
    }
    a[pos-1] = element;
    size++;
    printf("The updated values are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}
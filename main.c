#include<stdio.h>
int main()
{
    int size;
    printf("Size of array:");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Elements\n", size);
    
    for(int i=0;i<size;i++){
        printf("Element %d:", i+1);
        scanf("%d", &array[i]);
    }
    printf("Element:\n");
    for(int i=0; i<size;i++){
        printf("array[%d]=%d\n",i,array[i]);
    }
    return 0;
}
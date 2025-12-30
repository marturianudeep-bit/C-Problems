#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array:");
    if(scanf("%d",&size)!=1 || size <= 0){
        printf("Invalid size\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d elements:",size);
    for(i=0; i < size; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
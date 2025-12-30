#include <stdio.h>
int main() {
   int size,i;
   printf("Enter the size of the array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter %d elements:",size);
   for(i=0; i < size; i++){
    scanf("%d",&arr[i]);
   }    
    int max = arr[0];
    for(i=1; i < size; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("Maximum elements in the array: %d\n", max);
    return 0;
}
#include <stdio.h>
int main() {
  int size,i,count_even=0;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int arr[size];
  printf("Enter %d elements:",size);
  for(i=0; i < size; i++){
    scanf("%d",&arr[i]);
  }    
   for(i=0; i < size; i++){
    if(arr[i] % 2 == 0){
        count_even++;
    }
   }
    printf("Number of even elements in the array: %d\n",count_even);
    return 0;
}
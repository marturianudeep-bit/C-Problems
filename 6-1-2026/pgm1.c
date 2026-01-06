#include <stdio.h>
int main() {
  int n,i;
  int arr[50];
  float sum = 0, avg;
  printf("Enter number of elements:");
  scanf("%d",&n);

  printf("Enter elements:\n");
  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
    sum += arr[i];
  }    
   avg = sum / n;
   printf("Average = %.0f",avg);
    return 0;
}
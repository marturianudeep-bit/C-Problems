#include <stdio.h>
int main() {
     int n,i;
     int a[50];
     float sum = 0,average;
     printf("Enter number of elements:");
     scanf("%d",&n);
     printf("Enter elements:\n");
     for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum += a[i];
     }
      average = sum / n;
      printf("%.2f",average);
    return 0;
}
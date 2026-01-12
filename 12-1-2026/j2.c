#include <stdio.h>
int main() {
   int a[50],b[50],c[100];
   int n1,n2,i,j;
   printf("Enter number of elements in first array: ");
   scanf("%d",&n1);
   printf("Enter elements of first array:\n");
   for(i=0; i<n1; i++){
    scanf("%d",&a[i]);
    c[i] = a[i];
   }    
   printf("Enter number of elements in array: ");
   scanf("%d",&n2);
   printf("Enter elements of second array:\n");
   for(i=0; i<n2; i++){
    scanf("%d",&b[i]);
    c[n1 + i] = b[i];
   }
   printf("Merged array:\n");
   for(i=0; i < n1 + n2; i++){
    printf("%d", c[i]);
   }
   
    return 0;
}
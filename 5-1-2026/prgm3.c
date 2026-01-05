#include <stdio.h>
int main() {
   int n,i;
   int a[50];
   int largest,second;
   printf("Enter number of elements:\n");
   scanf("%d",&n);
   printf("Enter elements:\n");
   for(i=0; i<n; i++)
   scanf("%d",&a[i]);

   largest = second = a[0];
   for(i=0; i<n; i++){
    if(a[i] > largest){
        second = largest;
        largest = a[i];
    }
    else if(a[i] > second && a[i] != largest){
        second = a[i];
    }
   }    
    printf("second largest element = %d",second);
    return 0;
}
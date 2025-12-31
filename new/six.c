#include <stdio.h>
int main() {
   int  n,i,count=0;
   printf("Enter size of array:");
   scanf("%d",&n);

   int a[n];
   printf("Enter %d elements:\n",n);
   for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    if(a[i]<0){
        count++;
    }
   }    
    printf("Negative number count: %d",count);
    return 0;
}
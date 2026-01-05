#include <stdio.h>
int main() {
      int n,i;
      int a[50];
      int maximum , minimum;
      printf("Enter number of elements:");
      scanf("%d",&n);
      printf("Enter array elements:\n");
      for(i=0; i<n; i++){
        scanf("%d",&a[i]);
      }
       maximum = minimum = a[0];
       for(i=1; i<n; i++){
        if(a[i] > maximum)
        maximum = a[i];
        if(a[i] < minimum)
         minimum = a[i];
       }
       printf("maximum element = %d\n",maximum);
       printf("minimum elemenet = %d\n",minimum);
    return 0;
}
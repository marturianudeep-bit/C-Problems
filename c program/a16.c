#include <stdio.h>
int main() {
   int unit,cost;
   scanf("%d",&unit);
   if (unit<=100){
    cost =unit*1;
    printf("%d",cost);
   }    
   else (unit>100); {
    cost =unit*2;
    printf("%d",cost);
   }
    return 0;
}
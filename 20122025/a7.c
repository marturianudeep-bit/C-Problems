#include <stdio.h>
int main() {
   int year;
   scanf("%d",&year);
   if (year % 4 && year != 100 || year != 400){
    printf("Leap year");
   }    
   else{
    printf("Not leap year");
   }
    return 0;
}
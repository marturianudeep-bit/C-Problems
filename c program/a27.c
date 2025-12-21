#include <stdio.h>
int main() {
      int age,salary;
      scanf("%d %d",&age,&salary);
      if (age>=25 && salary>=40000){
        printf("Eligible");
      }
      else{
        printf("Not eligible");
      }
    return 0;
}
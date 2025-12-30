#include <stdio.h>
int main() {
      int sum=0;
      int i;

      for(i = 1; i <= 5; i++){
        sum = sum + i;
      }
      printf("sum is %d",sum);
    return 0;
}
#include <stdio.h>
int main() {
  int base,exp;
  long long result = 1;
  printf("Enter base and exponent: ");
  scanf("%d %d",&base, &exp);
  for(int i = 1; i <= exp; i++){
    result = result * base;
  }    
   printf("Result = %lld",result);
   
    return 0;
}
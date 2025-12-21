#include <stdio.h>
int main() {
  int x;
  scanf("%d",&x);
  if (x %4==0 && !(x %8==0)){
    printf("Yes");
  }    
  else{
    printf("No");
  }
    return 0;
}
#include <stdio.h>
int main() {
  int password;
  scanf("%d",&password);
  if (password==1234){
    printf("Access granted");
  }    
  else {
    printf("NOt Granted");
  }
    return 0;
}
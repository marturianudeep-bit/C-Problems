#include <stdio.h>
int main() {
  int marks;
  scanf("%d",&marks);
  if (marks<=95 && marks>=35){
    printf("Pass");
  }    
  else if (marks>=30 && marks<=34){
    printf("Grace pass");
  }
  else{
    printf("Fail");
  }
    return 0;
}
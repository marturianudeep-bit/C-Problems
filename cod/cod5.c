#include <stdio.h>
int main() {
  char str[50];
  int i,length = 0;

  scanf("%s",str);
  for(i=0; str[i] !='\0'; i++){
    length++;
  }    
   for(i = length-1; i >= 0; i--){
    printf("%c",str[i]);
   }
    return 0;
}
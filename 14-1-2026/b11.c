#include <stdio.h>
#include<string.h>

int main() {
  char str[100];
  int i,len;

  printf("Enter a message:\n");
  fgets(str, sizeof(str), stdin);

  len = strlen(str);

  if(str[len - 1] == '\n'){
    str[len - 1] == '\0';
    len--;
  }     
  printf("Reserved message:\n");
  for(i = len; i >= 0; i--){
    printf("%c",str[i]);
  }
  
    return 0;
}
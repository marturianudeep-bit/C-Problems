#include <stdio.h>
#include<string.h>

int main() {
  char url[200];

  printf("Enter the URL: ");
  scanf("%s",url);

  if(strncmp(url, "http://",7)== 0 || strncmp(url, "http://",8) == 0){
    printf("The URL uses a correct protocol.\n");
  }   else{
    printf("The URL does not use a correct protocol.\n ");
  }
  
    return 0;
}
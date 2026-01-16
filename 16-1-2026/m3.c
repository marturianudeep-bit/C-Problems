#include <stdio.h>
#include <string.h>

int main() {
  char filename[100];

  printf("Enter the file name: ");
  scanf("%s",filename);

  int len = strlen(filename);

  if(len >= 4 && strcmp(filename + len - 4,".txt") == 0){
    printf("The file is a .txt file.\n");
  } else{
    printf("The file is Not a txt file.\n");
  }
  
    return 0;
}
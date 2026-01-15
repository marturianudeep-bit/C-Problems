#include <stdio.h>
#include<string.h>

int main() {
  char log[200];
  printf("Enter log message:\n");
  fgets(log, sizeof(log), stdin);

  if(strstr(log,"error") != NULL)
   printf("Found\n");
  else
   printf("Not found\n");

    return 0;
}
#include <stdio.h>
int main() {
  char str1[50],str2[50];
  int i,flag=0;

  scanf("%d",str1,str2);
  for(i=0; str1[i] !='\0' || str2[i] !='\0'; i++){
    if(str1[i] !=str2[i]){
        flag =1;
        break;
    }
  }    
   if(flag == 0)
   printf("Equal");
   else
     printf("Not Equal");
    return 0;
}
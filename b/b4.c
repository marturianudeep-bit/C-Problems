#include <stdio.h>
int main() {
   char feedback[200];
   int i,count = 0;
   printf("Enter feedback: ");
   gets(feedback);

   for(i=0; feedback[i] != '\0'; i++){
    if((i == 0 && feedback[i] != ' ')|| (feedback[i] != ' ' && feedback[i-1] == ' ')){
        count++;
    }
   }    
    printf("Number of words : %d\n",count);
    
    return 0;
}
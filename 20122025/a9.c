#include <stdio.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ){
    printf("%c vowel\n",ch);
   }
   else{
    printf("%c consonant\n",ch);
   }
    return 0;
}
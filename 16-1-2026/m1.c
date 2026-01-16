#include <stdio.h>
#include<string.h>

int main() {
 char str[200];
 int count = 0;

 printf("Enter a comment: ");
 fgets(str, sizeof(str), stdin);

 for(int i = 0; str[i] != '\0'; i++){
    char ch = str[i];
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        count++;
    }
 } 
 printf("Number of vowels in the comment: %d\n", count);
 
    return 0;
}
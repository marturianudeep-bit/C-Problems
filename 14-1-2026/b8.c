#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i, duplicate = 0;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i] != '\0'; i++){
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]] > 1){
            duplicate = 1;
            break;
        }
    }
    if(duplicate)
    printf("Duplicates found\n");
    else
    printf("No duplicates\n");
       
    return 0;
}
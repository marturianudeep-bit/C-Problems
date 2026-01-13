#include <stdio.h>
#include<string.h>
int main() {
    char sentence[200];
    int i,maxlen = 0, currlen = 0;
    int endindex = 0;
    printf("Enter a sentence : ");
    fgets(sentence, sizeof(sentence), stdin);
    for(i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] != ' ' && sentence[i] != '\n'){
            currlen++;
            if(currlen > maxlen){
                maxlen = currlen;
                endindex = i;
            }
        } else{
            currlen = 0;
        }
    }
    printf("Longest word: ");
    for(i = endindex - maxlen + 1; i <= endindex; i++){
        printf("%c",sentence[i]);
    }
    printf("\nlength: %d",maxlen);
      
    return 0;
}
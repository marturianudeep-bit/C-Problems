#include <stdio.h>
int main() {
    char str[200];
    int freq[250] = {0};
    int i;
    printf("Enter a string:\n");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
        freq[(int)str[i]]++;
    } 
    printf("\ncharacter frequencies:\n");
    for(i=0; i < 250; i++){
        if(freq[i] != 0){
            printf("'%c' occurs %d times\n",i,freq[i]);
        }
    }
    
    return 0;
}
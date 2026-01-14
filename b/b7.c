#include <stdio.h>
#include<ctype.h>
int main() {
    char name[100];
    int i;

    printf("Enter customer name: ");
    scanf("%s",name);

    name[0] = toupper(name[0]);

    for(i=1; name[i] != '\0'; i++){
            name[i] = tolower(name[i]);

        }
        printf("Formatted name: %s\n",name);
    
      
    return 0;
}
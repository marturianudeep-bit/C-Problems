#include<stdio.h>
#include<string.h>
int main(){
    char email[100];
    char domain[] = "@company.com";
    char *pos;

    printf("Enter email address: ");
    scanf("%s",email);
    pos = strstr(email,domain);

    if(pos != NULL && strcmp(pos,domain) == 0){
        printf("valid email\n");
    }
    else{
        printf("Invalid email\n");
    }
    return 0;
}
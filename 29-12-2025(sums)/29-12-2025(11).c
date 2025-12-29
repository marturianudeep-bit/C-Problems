#include <stdio.h>
int main() {
    int num,temp,reminder,reverse=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num !=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num/=10;
    } 
    if(temp==reverse)
    printf("Palidrome");
    else
    printf("Not polidrome");
    return 0;
}
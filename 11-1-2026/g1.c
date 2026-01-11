#include <stdio.h>
int main() {
    int num,originalnum,remainder,result=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalnum=num;
    while(num !=0){
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num/10;
    }
    if(result == originalnum)
    printf("%d is an Armstrong number.",originalnum);
    else
    printf("%d is not an Armstrong number.",originalnum);
    
    return 0;
}
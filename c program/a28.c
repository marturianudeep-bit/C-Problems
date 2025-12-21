#include <stdio.h>
int main() {
    //Your Code goes here!
    int num;
    scanf("%d",&num);
    if(num %2==0 && num>0){
        printf("Positive even");
    }
    else if(num>0 && num %3==0){
        printf("Positive odd");
    }
    else {
        printf("Negative");
    }
    return 0;
}
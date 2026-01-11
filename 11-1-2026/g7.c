#include <stdio.h>
int main() {
    int start,end,i,count,num;
    printf("Enter the starting number:\n ");
        scanf("%d",&start);

    printf("Enter the ending number:\n ");
    scanf("%d",&end);
    printf("prime number between %d and %d are:\n ", start,end);
    for(num = start; num <= end; num++){
        if(num <= 1)
        continue;

        count = 0;
        for(i = 1; i <= num; i++){
            if(num % i == 0)
            count++;
        }
        if(count == 2)
        printf("%d ", num);

    } 
    return 0;
}
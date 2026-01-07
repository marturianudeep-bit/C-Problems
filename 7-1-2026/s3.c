#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }    
    int oddsum=0;
    int evensum=0;
    for(int i=0; i<size; i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }

    }
    int diff=oddsum-evensum;
    printf("%d",diff);
    return 0;
}
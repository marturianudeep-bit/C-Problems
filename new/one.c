#include <stdio.h>
int main() {
    int n,arr[100],count=0;
    printf("Input:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    
     if(arr[i] % 2 == 0){
        count++;
     
    }
    }
    printf("Output: %d\n",count);
    return 0;
}
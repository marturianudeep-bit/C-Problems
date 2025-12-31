#include <stdio.h>
int main() {
  int n,arr[100],search,found=0;
  printf("Input:");
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }    
  scanf("%d",&search);
  for(int i = 0; i < n; i++){
    if(arr[i] == search){
        found = 1;
        break;
    }
  }
  if(found){
    printf("Output: found\\n");
  }
  else{
    printf("Output: notfound\\n");
  }
    return 0;
}
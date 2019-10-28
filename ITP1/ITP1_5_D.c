#include <stdio.h>
int main(){
    int n;
    int x;
    int i = 1;
    scanf("%d", &n);
    while(i<n+1){
      x = i;
        if(x%3==0){
            printf(" %d", i);
        }else{
          while(x>0){
          if(x%10==3){
            printf(" %d", i);
            break;
          }else{
            x /= 10;
          }
        }
      }
      i++;
    }
    printf("\n");
    return 0;
}

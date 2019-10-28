#include <stdio.h>
int main(){
  int n, x;
  int i, j, k, l;

  for(i=0; i<1000; i++){
    scanf("%d %d", &n, &x);
    if(n==0 && x==0){
      break;
    }else{
      int count_check=0;
      for(j=1; j<n+1; j++){
        for(k=j+1; k<n+1; k++){
          for(l=k+1; l<n+1; l++){
            if(j+k+l==x){
              count_check+=1;
              break;
            }
          }
        }
      }
      printf("%d\n", count_check);
    }
  }
  return 0;
}

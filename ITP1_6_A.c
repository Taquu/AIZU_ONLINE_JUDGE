#include <stdio.h>
int main(){
  int n;
  int i;
  int num[100];
  int input;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &input);
    num[i]=input;
  }

  for(i=0; i<n/2; i++){
    int t=num[i];
    num[i]=num[n-i-1];
    num[n-i-1]=t;
  }

  for(i=0; i<n; i++){
    printf("%d", num[i]);
    if(i==n-1){
      break;
    }
    printf(" ");
  }

  printf("\n");
  return 0;
}

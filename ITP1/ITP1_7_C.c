#include <stdio.h>
int main(){
  int r, c;
  int arr[100][100];
  int arr_r[100];
  int arr_c[100];
  int total=0;
  int input;
  int i, j;

  //input r×c
  scanf("%d %d", &r, &c);
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      scanf("%d", &input);
      arr[i][j]=input;
    }
  }

  //calculation
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      arr_r[i]+=arr[i][j];
      arr_c[j]+=arr[i][j];
    }
    total+=arr_r[i];
  }

  //output
  for(i=0; i<r+1; i++){
    for(j=0; j<c+1; j++){
      if(i != r){
        if(j != c){
          printf("%d ", arr[i][j]);
        }else{
          printf("%d\n", arr_r[i]);
        }
      }else{
        if(j != c){
          printf("%d ", arr_c[j]);
        }else{
          printf("%d\n", total);
        }
      }
    }
  }
  return 0;
}

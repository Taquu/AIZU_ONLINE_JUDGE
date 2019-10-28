#include <stdio.h>
int main(){
  int n;
  int num_b, num_f, num_r, num_v;
  int b, f, r;
  int arr[4][3][10];
  int i;

  //setting initialization
  for(b=0; b<4; b++){
    for(f=0; f<3; f++){
      for(r=0; r<10; r++){
        arr[b][f][r]=0;
      }
    }
  }

  //input information
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d %d %d %d", &num_b, &num_f, &num_r, &num_v);
    arr[num_b-1][num_f-1][num_r-1]+=num_v;
    }

  //output information
  for(b=0; b<4; b++){
    for(f=0; f<3; f++){
      for(r=0; r<10; r++){
        printf(" %d", arr[b][f][r]);
      }
      printf("\n");
    }
    if(b<3){
      printf("####################\n");
    }
  }
  return 0;
}

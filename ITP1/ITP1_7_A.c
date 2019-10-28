#include <stdio.h>
int main(){
  int input_m, input_f, input_r;
  int i;
  char gread;
  for(i=0; i<50; i++){
    scanf("%d %d %d", &input_m, &input_f, &input_r);
    if(input_m==-1 && input_f==-1 && input_r==-1){
      break;
    }else{
      int total=input_m+input_f;
        if(input_m==-1 || input_f==-1){
          printf("F\n");
        }else if(total>=80){
          printf("A\n");
        }else if(total>=65 && total<80){
          printf("B\n");
        }else if(total>=50 && total<65){
          printf("C\n");
        }else if(total>=30 && total<50){
          if(input_r>=50){
            printf("C\n");
          }else{
            printf("D\n");
          }
        }else{
          printf("F\n");
        }
    }
  }
  return 0;
}

#include <stdio.h>
int main(){
  int n;
  char p, newline;
  int input;
  int trump[4][13];
  int i, j;

  //trump initiallize
  for(i=0; i<4; i++){
    for(j=0; j<13; j++){
      trump[i][j]=0;
    }
  }

  //input trump cards
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%c", &newline);
    scanf("%c %d", &p, &input);
    switch(p){
      case 'S':
        trump[0][input-1]=1;
        break;
      case 'H':
        trump[1][input-1]=1;
        break;
      case 'C':
        trump[2][input-1]=1;
        break;
      case 'D':
        trump[3][input-1]=1;
        break;
    }
  }

  //output trump cards
  for(i=0; i<4; i++){
    for(j=0; j<13; j++){
      if(trump[i][j]==0){
        switch(i){
          case 0:
            printf("S %d\n", j+1);
            break;
          case 1:
            printf("H %d\n", j+1);
            break;
          case 2:
            printf("C %d\n", j+1);
            break;
          case 3:
            printf("D %d\n", j+1);
            break;
        }
      }
    }
  }
  return 0;
}

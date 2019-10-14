#include <stdio.h>
int main(){
    int h, w;
    int i = 0;
    int j, k;
    while(i<1000){
      scanf("%d %d", &h, &w);
      if(h == 0 && w == 0){
        break;
      }else{
        for(j=0; j<h; j++){
          for(k=0; k<w; k++){
            printf("#");
          }
          printf("\n");
        }
        printf("\n");
      }
      i++;
    }
    return 0;
  }

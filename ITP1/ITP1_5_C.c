#include <stdio.h>
int main(){
    int h, w;
    int i = 0;
    int j, k, l;
    while(i<1){
        scanf("%d %d", &h, &w);
        if(h==0 && w==0){
            break;
        }else{
            for(j=0; j<h; j++){
                if(j%2==0){
                    for(k=0; k<w; k++){
                        if(k%2==0){
                            printf("#");
                        }else if(k%2==1){
                            printf(".");
                        }
                    }
                    printf("\n");
                }else if(j%2==1){
                    for(l=0; l<w; l++){
                        if(l%2==0){
                            printf(".");
                        }else if(l%2==1){
                            printf("#");
                        }
                    }
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

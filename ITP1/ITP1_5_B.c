#include <stdio.h>
int main(){
    int h, w;
    int i = 0;
    int j, k, l, m;
    while(i<1000){
        scanf("%d %d", &h, &w);
        if(w == 0 && h == 0){
            break;
        }else{
            for(j=0; j<w; j++){
                printf("#");
            }
            printf("\n");
            for(k=0; k<h-2; k++){
                printf("#");
                for(l=0; l<w-2; l++){
                    printf(".");
                }
                printf("#\n");
            }
            for(m=0; m<w; m++){
                printf("#");
            }
            printf("\n\n");
        }
    }
    return 0;
}

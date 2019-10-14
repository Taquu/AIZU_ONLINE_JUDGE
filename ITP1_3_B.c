#include <stdio.h>
int main(){
    int i;
    int num;
    for(i=0; i<10000; i++){
        scanf("%d", &num);
        if(num == 0){
            break;
        }else{
            printf("Case %d: %d\n", i+1, num);
        }
    }
    return 0;
}

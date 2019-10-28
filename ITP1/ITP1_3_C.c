#include <stdio.h>
int main(){
    int a, b;
    int i;
    for(i=0; i<10000; i++){
        scanf("%d %d", &a, &b);
        if(a == 0 && b ==0){
            break;
        }else if(b<=a){
            printf("%d %d\n", b, a);
        }else{
            printf("%d %d\n", a, b);
        }
    }
    return 0;
}

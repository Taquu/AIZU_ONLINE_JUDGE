#include <stdio.h>
int main(){
    int a, b;
    int i;
    char k;
    for(i=0;i<10000; i++){
        scanf("%d %c %d", &a, &k, &b);
        if(k == '?'){
            break;
        }else if(k == '+'){
            printf("%d\n", a+b);
        }else if(k == '-'){
            printf("%d\n", a-b);
        }else if(k == '*'){
            printf("%d\n", a*b);
        }else{
            printf("%d\n", a/b);
        }
    }
    return 0;
}

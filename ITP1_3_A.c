#include <stdio.h>
int main(){
    char hw[]="Hello World";
    int i;
    for(i=0; i<1000; i++){
        printf("%s\n", hw);
    }
    return 0;
}

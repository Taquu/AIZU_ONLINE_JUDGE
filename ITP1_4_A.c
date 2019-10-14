#include <stdio.h>
int main(){
    int a, b;
    float c;
    scanf("%d %d", &a, &b);
    c = (float)a/(float)b;
    printf("%d %d %f", a/b, a%b, c);

    return 0;
}

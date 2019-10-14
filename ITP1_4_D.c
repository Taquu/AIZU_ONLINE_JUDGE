#include <stdio.h>
int main(){
    int n;
    long a[10000];
    int i;
    long total = 0;
    long min, max;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%ld", &a[i]);
        total += a[i];
    }
    min = max = a[0];
    for(i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }else if(min > a[i]){
            min = a[i];
        }
    }
    printf("%ld %ld %ld\n", min, max, total);
    return 0;
}

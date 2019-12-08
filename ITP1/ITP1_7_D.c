#include <stdio.h>
int main(){
  int n, m, l;
  int i, j, k;
  long input;
  long a[200][200];
  long b[200][200];
  long c[200][200];

  //input n, m, l
  scanf("%d %d %d", &n, &m, &l);

  //input matrixA and matrixB
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      scanf("%ld", &input);
      a[i][j]=input;
    }
  }
  for(j=0; j<m; j++){
    for(k=0; k<l; k++){
      scanf("%ld", &input);
      b[j][k]=input;
    }
  }

  //calcuration (matrixA * matrixB)
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      for(k=0; k<l; k++){
        c[i][k]+=a[i][j]*b[j][k];
      }
    }
  }

  //output matrixC
  for(i=0; i<n; i++){
    for(k=0; k<l; k++){
      if(k != l){
        printf("%ld ", c[i][k]);
      }else{
        printf("%ld", c[i][k]);
      }
    }
    printf("\n");
  }
  return 0;
}

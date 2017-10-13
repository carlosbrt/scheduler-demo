#include <stdio.h>

int main() {
  int a[5];
  int n, flag=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  

  for (int i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */

    for (int j=0; j<5; j++) {

      if (((i+1)%a[j])==0){

        printf ("%d", j);
        flag = 1;

      }

    }

    if (flag == 0){
      printf("-");
    }
     
    flag = 0;
    printf("\n");

  }

  return 0;
}

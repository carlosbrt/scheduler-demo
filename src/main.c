#include <stdio.h>

int main() {
  int a[5];
  int n, flag=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  

  for (int i=0; i<n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */

    for (int j=0; j<5; j++) {
    /* Imprime resultado do j-esimo processo executado no ciclo atual */

      if (((i+1)%a[j])==0){	//verifica se processo executa neste ciclo

        printf ("%d", j);
        flag = 1;		//sinaliza que há processo no ciclo atual

      }

    }

    if (flag == 0){		//caso não haja processo no ciclo
      printf("-");
    }
     
    flag = 0;			//reseta flag de ausencia de processo
    printf("\n");		//proximo ciclo

  }

  return 0;
}

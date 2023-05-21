#include <assert.h>
#include <stdio.h>

int suma_hasta(int N) {
  int suma;
  suma=(N*(N+1))/2;
  return suma;
}
int main (void) {
  int a, resultado;
  printf("Ingrese un valor positivo para : \n");
  scanf ("%d",&a);
  suma_hasta(a);
  resultado = suma_hasta(a);

  if (a>0){
      printf("El resultado final es : %d  \n", resultado);
  }
  else {
    printf ("Error. El número ingresado debe ser positivo");
  }

  return 0;
}    

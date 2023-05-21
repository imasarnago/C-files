#include <stdio.h>
#include <stdbool.h>


bool es_primo (int n) {
  int i;
  i=2;
  bool res;
  res=true;
  while (i<n-1) { //por qué i no es menor estricto que n?
    res = res && n % i != 0;
    i=i+1;
  }

  return res;
}


int nesimo_primo (int N) {
  int primo;
  primo=2;
  int contador;
  contador=0;
  int i;
  i=2;

  while (contador<N) {
    if (es_primo (i)) {
      primo=i;
      contador=contador+1;
    }

    i=i+1;
  }
  
  return primo;
}



int main (void) {
    int N;
    int primo;
    printf("Ingrese un numero para chequear que es primo : \n");
    scanf("%d",&N);
    primo=nesimo_primo(N);
    printf("El %d° numero primo es : %d \n",N,primo);
    return 0; 
}


//gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma 
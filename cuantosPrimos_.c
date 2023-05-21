#include <stdio.h>
#include <stdbool.h> 


int cuantos_divisores (int N) {
  int i = 2;
  int count = 0;
  while (i<N) {
    if (N % i == 0) {
      count = count + 1;
      //printf("Count : %d I : %d",count,i);
    }
    i = i + 1;
  }
  
  
  return count;
}




int main (void) {
  int x;
  int N;
  printf("Ingrese un numero : ");
  scanf("%d", &N);
  x = cuantos_divisores(N); 
  printf("La cantidad de divisores del número ingresado es : %d \n", x);
  return 0;
}


/* bool es_primo (int n) {
  int i;
  i=2;
  bool res;
  res=true;
  while (i<n-1) { //por qué i no es menor estricto que n?
    res = res && n % i != 0;
    i=i+1;
  }

  return res;
}*/
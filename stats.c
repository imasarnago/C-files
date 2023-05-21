#include <stdio.h>
#include <assert.h>
#define N 5

void pedirArreglo(float a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese un elemento %d : \n", i);
    scanf("%f", &a[i]);
    i = i + 1;
  }
}

typedef struct {
  float maximo;
  float minimo;
  float promedio;
} datos_t;

datos_t stats(float a[], int tam) {
  assert(tam >= 1);

  datos_t resultado;
  resultado.maximo = a[0];
  resultado.minimo = a[0];
  resultado.promedio = 0;//a[0]; / tam;
  int i = 0; 
  while (i < tam) {
    if (a[i] > resultado.maximo) {
      resultado.maximo = a[i];
    }
    if (a[i] < resultado.minimo) {
      resultado.minimo = a[i];
    }
    resultado.promedio = resultado.promedio + a[i] / tam;
    i = i + 1;
  }
  return resultado;
}  

int main(void) {
  int n;
  float a[n];
  pedirArreglo (a, N);
  datos_t resultado = stats(a, N);
  printf("El minimo del arreglo es : %f \n", resultado.minimo);
  printf("El maximo del arreglo es : %f \n", resultado.maximo);
  printf("El promedio del arreglo es : %f \n", resultado.promedio);
  return 0;
}    
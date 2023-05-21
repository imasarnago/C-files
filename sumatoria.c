#include <stdio.h>

void pedirArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese un elemento %d : \n", i);
    scanf("%d", &a[i]);
    i = i + 1;
  }
}

int sumatoria(int a[], int tam) {
  int i, suma;
  suma = 0;
  i = 0;
  while (i < tam) {
    suma = suma + a[i];
    i = i + 1;
  }
  return suma;
}
int main(void) {
  int n, resultado;
  printf("Ingrese la cantidad de elementos que debe tener el arreglo : \n");
  scanf("%d", &n);
  int a[n];
  pedirArreglo(a, n);
  resultado = sumatoria(a, n);
  printf("El resultado es = %d", resultado);
  return 0;
}

/*
Ejecutado sin problemas. El código funciona muy bien. :)
*/
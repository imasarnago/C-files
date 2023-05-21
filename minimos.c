#include <stdio.h>
#include <limits.h>
#define N 3

void pedirArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese un elemento %d : \n", i);
    scanf("%d", &a[i]);
    i = i + 1;
  }
}

int minimo_pares(int a[], int tam) {
  int i;
  i = 0;
  int  parmin;
  parmin = INT_MAX;
  while (i < tam) {
        if (a[i]<parmin && a[i] % 2 == 0)
        {
          parmin = a[i];
        }

    i = i + 1;
  }
  return parmin;
} 

int minimo_impares(int a[], int tam) {
  int i;
  i = 0;
  int  imparmin;
  imparmin = INT_MAX;
  while (i < tam) {
        if (a[i]<imparmin && a[i] % 2 != 0)
        {
          imparmin = a[i];
        }

    i = i + 1;
  }
  return imparmin;
} 
int main(void) {
  int n, x, y;
  int a[n];
  pedirArreglo(a, N);
  x=minimo_pares(a, N);
  y=minimo_impares(a, N);
  printf("El menor elemento par del arreglo es : %d  \n", x);
  printf("El menor elemento impar del arreglo es : %d  \n", y);
  return 0;
}
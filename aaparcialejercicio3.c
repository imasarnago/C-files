#include <limits.h>
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

typedef struct {
  int maximo_par;
  int minimo_impar;
} paridad_t;

paridad_t maxmin_paridad(int a[], int tam) {
  int i, min, max;
  i = 0;
  max = INT_MIN;
  min = INT_MAX;
  paridad_t res;
  while (i < tam) {
    if (a[i] > max && a[i] % 2 == 0) {
      max = a[i];
    }
    if (a[i] < min && a[i] % 2 != 0) {
      min = a[i];
    }
    i = i + 1;
  }
  res.maximo_par = min;
  res.minimo_impar = max;
  return res;
}

#define N 5
int main(void) {
  int a[N];
  pedirArreglo(a, N);
  paridad_t res = maxmin_paridad(a, N);
  printf("El maximo par es : %d \n El minimo impar es : %d", res.maximo_par,
         res.minimo_impar);

  return 0;
}
#include <stdio.h>
#define N 7

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
  int menores;
  int iguales;
  int mayores;
} comp_t;

comp_t cuantos(int a[], int tam, int elem) {
  int i, men, ig, may;
  i = 0;
  men = 0;
  ig = 0;
  may = 0;

  while (i < tam) {
    if (a[i] < elem) {
      men = men + 1;
    }
    if (a[i] == elem) {
      ig = ig + 1;
    }
    if (a[i]>elem)
    {
      may = may + 1;
    }

    i = i + 1;
  }
   comp_t resultado; 
  resultado.menores = men;
  resultado.iguales = ig;
  resultado.mayores = may;

  return resultado;
}

int main(void) {
  int n, e;
  int a[n];
  printf("Ingrese un numero positivo : \n");
  scanf("%d", &e);
  pedirArreglo(a, N);
  cuantos(a, N, e);
  comp_t resultado = cuantos(a, N, e);
  printf("Hay %d elementos menores a %d \n", resultado.menores, e);
  printf("Hay %d elementos iguales a %d \n", resultado.iguales, e);
  printf("Hay %d elementos mayores a %d \n", resultado.mayores, e);

  return 0;
}

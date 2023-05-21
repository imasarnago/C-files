#include <stdio.h>
#define N 5

void pedirArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese un elemento %d : \n", i);
    scanf("%d", &a[i]);
    i = i + 1;
  }
}

void imprimeArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("El %d° valor ahora es : %d  \n", i, a[i]);
    i = i + 1;
  }
}

void intercambiar(int a[], int tam, int i, int j) {
  int x, y;
  x = a[i];
  y = a[j];
  a[i] = y;
  a[j] = x;
}

int main(void) {
  int x, y;
  int a[N];
  pedirArreglo(a, N);
  printf("Ingrese el valor de la fila que desea intercambiar : \n");
  scanf("%d", &x);
  x = x - 1;
  printf("Ingrese el valor de la segunda fila que desea intercambiar :\n");
  scanf("%d", &y);
  y = y - 1;
  intercambiar(a, N, x, y);
  imprimeArreglo(a, N);
}


/*
 La siguiente parte del código (tomado de la función main) se escribió así
porque es más fácil que el usuario ingrese los valores de las filas que desea
intercambiar y luego hacer el juego de permutarlas en el código sin que se
entere. Esto responde a la necesidad de cuando el usuario ingresa un número de
fila, no sabe que estamos empezando a contar desde el valor 0 (justamente por
esto último inicializamos i=0). 


printf("Ingrese el valor de la fila que desea
intercambiar : \n"); scanf("%d", &x); x=x-1; 

printf("Ingrese el valor de la
segunda fila que desea intercambiar :\n"); scanf("%d", &y); y=y-1;
 */
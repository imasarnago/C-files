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
void imprimeArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("El elemento %d es : %d  \n", i, a[i]);
    i = i + 1;
  }
}
int main(void) {
  int n;
  printf("Ingrese la cantidad de elementos que debe tener el arreglo deseado : "
         "\n ");
  scanf("%d", &n);
  int a[n];
  pedirArreglo(a, n);
  imprimeArreglo(a, n);

  return 0;
}
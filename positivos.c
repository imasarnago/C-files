#include <stdio.h>
#include <stdbool.h>
#define N 5

void pedirArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i<n_max) {
    printf ("Ingrese un elemento %d : \n", i);
    scanf ("%d", &a[i]);
    i=i+1;
  }
}

bool existe_positivo(int a[], int tam) {
  int i;
  bool b;
  b = false;
  i=0;
  while (i<tam) {
    b = b || a[i]>0;
    i = i+1;
  }
  return b;
}


bool todos_positivos(int a[], int tam) {
  bool b;
  int i;
  i = 0;
  b = true;
  while (i<tam){
    b = b && a[i]>0;
    i = i+1;
  }
  return b;
}

int main (void) {
  int x;
  bool c;
  int a[N];
  printf ("Teniendo en cuenta un arreglo de tamaño %d \n",N);
  pedirArreglo (a,N);
  printf ("Desea verificar que todos los numeros son positivos o si alguno lo es? \n Ingrese 1 para la primera opcion o Ingrese un 0 para la segunda opcion: \n");
  scanf ("%d", &x);
  if (x!=1) { 
    c = existe_positivo (a,N);
    printf ("Resultado (1 si es True, 0 si es False) : %d \n", c);
  }
  else {
    c = todos_positivos (a,N);
    printf ("Resultado (1 si es True, 0 si es False) : %d \n", c);
  }
  return 0; 
}  
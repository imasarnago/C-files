#include <stdbool.h>
#include <stdio.h>
#define N 6

typedef char clave_t;
typedef int valor_t;

typedef struct {
  clave_t clave;
  valor_t valor;
} asoc;

void pedirArreglo(asoc a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese el caracter %d : \n", i);
    scanf(" %c", &a[i].clave);
    printf("Ingrese un valor numérico %d : \n", i);
    scanf(" %d", &a[i].valor);
    i = i + 1;
  }
}

bool asoc_existe(asoc a[], int tam, clave_t c) {
  int i, res;
  i = 0;
  bool x;
  x = false;
  if(i < tam) {  //a[i]
    res = 1;
    i = tam;
    }
  
    else {
    i = i + 1;
  }
  return x;
}

int main(void) {
  int n;
  char c;
  bool res;
  asoc a[N];
  pedirArreglo(a, N);
  printf("Ingrese una clave a continuación (letras): \n");
  scanf(" %c", &c);
  asoc_existe(a, N, c);
  res = asoc_existe(a, N, c);
  if (res) {
    printf("La clave existe");
  } else {
    printf("La clave no existe");
  }
  return 0;
}

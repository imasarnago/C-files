/* 1. (Funciones en C, Assert) Escrib ́ı los programas siguientes:
a) ejercicio01.c que lee una variable n de tipo int e imprime por pantalla
“hola” n veces. En esta ocasi ́on el programa debe utilizar dos funciones a
definir (adem ́as de la funci ́on main). Program ́a en un archivo .c la funci ́on de
prototipo: void holaHasta(int n)

1

que dado un int n, imprime n veces “Hola”. (Usar una bucle while). La funci ́on
main pide un n ́umero en la entrada antes de llamar holaHasta (¿qu ́e funci ́on
podes usar ya implementada?). Us ́a la funci ́on assert (ver te ́orico) para
chequear que x > 0. */

#include <assert.h>
#include <stdio.h>
int pedirEntero() {
  int x;
  printf("Ingrese el valor de x :\n");
  scanf("%d", &x);
  assert(x > 0);
  return x;
}

void holaHasta(int n) {
  int i;
  i = 0;
  while (i != n && n > i) {
    printf("Hola \n");
    i = i + 1;
  }
}

int main() {
  int a;
  a = pedirEntero();
  holaHasta(a);
  return 0;
}

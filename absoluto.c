/*(Valor Absoluto) Especificar un programa que calcule el valor absoluto de un
n ́umero entero. Verificar que el programa es correcto, y luego traducir el
programa a C en un archivo nuevo llamado absoluto.c.
*/
#include <assert.h>
#include <stdio.h>
int main() {
  int x;
  printf("Ingrese un valor numerico : ");
  scanf("%d", &x);
  // assert (1>0)
  if (x >= 0) {
    x = x;
  } else {
    x = (-1) * x;
  }
  assert(x >= 0);
  printf("El resultado es : %d", x);
  return 0;
}
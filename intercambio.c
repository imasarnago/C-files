#include <assert.h>
#include <stdio.h>

int main(void) {
  int x, y, z, valor_x, valor_y;
  printf("Ingrese un valor para x : ");
  scanf("%d", &x);
  valor_x = x;
  printf("Ingrese un valor para y : ");
  valor_y = y;
  // assert (1>0);
  scanf("%d", &y);
  printf("Los valores ingresados son x: %d, y: %d", x, y);
  z = x;
  x = y;
  y = z;
  printf("El estado final de las variables es x=%d, y=%d", x, y);
  return 0;
}
#include<assert.h>
#include <stdio.h>

    int main(void) {
  int x, y, z, valor_1, valor_2, valor_3;
  printf("Ingrese un valor para x : \n");
  scanf("%d", &x);
  valor_1 = x;
  printf("Ingrese un valor para y : \n");
  scanf("%d", &y);
  valor_2 = y;
  printf("Ingrese un valor para z : \n");
  scanf("%d", &z);
  valor_3 = z;
  x = y;
  y = y + valor_1 + valor_3;
  z = valor_1 + valor_2;
  printf("El estado final es : %d , %d, %d", x, y, z);
  return 0;
}
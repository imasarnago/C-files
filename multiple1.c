#include <assert.h>
#include <stdio.h>

int main(void) {
  int x, y, valor_1, valor_2;
  printf("Ingrese un valor para x : \n");
  scanf("%d", &x);
  valor_1 = x;
  printf("Ingrese un valor para y : \n");
  scanf("%d", &y);
  valor_2 = y;
  x = x + 1;
  y = valor_1 + y;
  printf("El estado final es : %d , %d", x, y);
  return 0;
}
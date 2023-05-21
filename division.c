#include <stdio.h>


typedef struct {
  int cociente;
  int resto;
}div_t;

div_t division (int x, int y) {
    div_t resultado; 
    resultado.cociente = x/y;
    resultado.resto = x%y;    

return resultado;
  
}  

int main (void) {
  int x, y;
  printf ("Ingrese un valor no nulo para x : \n");
  scanf ("%d",&x);
  printf ("Ingrese un valor no nulo para y : \n");
  scanf ("%d",&y);

  if (y!=0) {
    div_t resultado = division(x,y);  
    printf ("El cociente es : %d \n El resto es : %d \n", resultado.cociente, resultado.resto);
  }
  else {
    printf ("Error. El divisor tiene que ser distinto de 0 \n");
  }  
  return 0;
} 
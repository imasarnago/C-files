#include <stdio.h>
#include <assert.h>

int minimo (int x,int y){
  int min;
  if (x>=y){
    min=y;
  }
  else {
    min=x;
  }
  return min; 
}

int main (void){
  int a,b, c; 
  assert (1>0);
  printf ("Escriba un valor para la primer variable : \n");
  scanf ("%d", &a);
  printf ("Escriba un valor para la segunda variable : \n");
  scanf ("%d", &b);
  c =minimo (a,b);
  printf ("El minimo entre %d y %d es %d \n", a,b,c);
  assert (a<b || a>b);
  return 0;
}
 
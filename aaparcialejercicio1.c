#include <assert.h>
#include <stdio.h>

/*
int pedirEntero(void){
int n;
printf ("Ingrese un valor numerico que pertenezca a los numeros reales : \n");
scanf ("%d",&n);
return n;
}



int main (void) {
int x,y,z,valor_x,valor_y,valor_z;
pedirEntero();
scanf("%d",&x);
valor_x = x;
pedirEntero();
scanf("%d",&y);
valor_y = y;
pedirEntero();
scanf("%d",&z);
valor_z = z;
assert(x==valor_x && y == valor_y && z = valor_z && valor_y != 0 && valor_z >
0); x = y*z; y = y; z = valor_x/valor_y; printf ("El resultado final del
programa es x : %d \n y : %d \n z : %d \n",x,y,z); assert (x=valor_y * valor_z
&& y = valor_x % valor_z && z = valor_x / valor_y);

return 0;
  }*/

int pedirEntero(void) {
  int n;
  printf("Ingrese un valor numerico que pertenezca a los numeros reales : \n");
  scanf("%d", &n);
  return n;
}

int main(void) {
  int x, y, z, valor_x, valor_y, valor_z;
  // pedirEntero();
  x = pedirEntero();
  valor_x = x;
  // pedirEntero();
  y = pedirEntero();
  valor_y = y;
  // pedirEntero();
  z = pedirEntero();
  valor_z = z;
  assert(x == valor_x && y == valor_y && z == valor_z && valor_y != 0 &&
         valor_z > 0);
  x = y * z;
  y = valor_x % valor_z;
  z = valor_x / valor_y;
  printf("El resultado final del programa es \n x : %d \n y : %d \n z : %d \n",
         x, y, z);
  assert(x == valor_y * valor_z && y == valor_x % valor_z &&
         z == valor_x / valor_y);

  return 0;
}
/*
#include <stdio.h>



void pedirArreglo(int a[], int n_max) {
int i;
i = 0;
while (i<n_max) {
printf ("Ingrese un elemento %d : \n", i);
scanf ("%d", &a[i]);
i=i+1;
}
}
int pedirEntero(void){
int n;
printf ("Ingrese un valor numerico que pertenezca a los numeros reales : \n");
scanf ("%d",&n);
return n;
}


int multiplica_multiplos(int a[], int tam, int k) {
int i,res;
i=0;
while (i<tam) {
if (a[i] % k == 0)
{
res = res + a[i];
}

res = 1;
}
return res;
}

#define N 5
int main (void) {
int a[N],k,resfinal;
pedirArreglo(a,N);
pedirEntero();
scanf("%d",&k);
multiplica_multiplos(a,N,k);
resfinal = multiplica_multiplos(a,N,k);
printf("El resultado final es : %d \n", resfinal);
return 0;
}

*/

#include <assert.h>
#include <stdio.h>

void pedirArreglo(int a[], int n_max) {
  int i;
  i = 0;
  while (i < n_max) {
    printf("Ingrese un elemento : \n");
    scanf("%d", &a[i]);
    i = i + 1;
  }
}
int pedirEntero(void) {
  int n;
  printf("Ingrese un valor numerico que pertenezca a los numeros reales : \n");
  scanf("%d", &n);
  return n;
}

int multiplica_multiplos(int a[], int tam, int k) {
  int i, res;
  i = 0;
  res = 1;
  while (i < tam) {
    if (a[i] % k == 0) {
      res = res * a[i];
    }
    i = i + 1;
  }
  return res;
}

#define N 5
int main(void) {
  int a[N], k, resfinal;
  pedirArreglo(a, N);
  // pedirEntero();
  k = pedirEntero();
  assert(k != 0);
  // multiplica_multiplos(a, N, k);
  resfinal = multiplica_multiplos(a, N, k);
  printf("El resultado final es : %d \n", resfinal);
  return 0;
}
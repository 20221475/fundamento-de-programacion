#include <stdio.h>
/*incremento de precio.
el programa, al recibir como dato el precio de un producto importado,
  incrementa 11% el mismo si este es inferior a $1,500.
  pre y npr: variable de tipo real. */


int main(void)
{
  float pre, npr;
  printf("ingresa el precio del producto\n");
  scanf("%f", &pre);
  if (pre > 1500)
  {
    npr = pre * 1.11;
    printf("/nNuevo precio %7.2f" ,npr);
  }
  return 0;
}

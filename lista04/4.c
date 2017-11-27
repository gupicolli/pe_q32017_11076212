#include <stdio.h>
#include <time.h>
#include <limits.h>
#define  BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
    if (x == 0){
        return 0;
    }
    while (x != 1){
        if (x%2 != 0) {
        return 0;
        }
    x = x/2;
    }
    return 1;
}
ulint f2(ulint x)
{
  return x && (!(x&(x-1)));
}
int main(void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    int i;
    tempo_init = clock();
    for(i =0;i<BIGNUM;i++)
    {
        soma += f1(i);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

    tempo_init = clock();
    for (i =0;i<BIGNUM;i++){
    soma += f2(i);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise:%lf\n",tempo_gasto);
    return 0;
}

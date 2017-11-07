#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void * a , const void* b)
{
    return ( *(int*)a - *(int*)b );
}
void pegaVetor(int * p , int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", p + i);

	}
}
int * criaVetor(int n)
{
	int * p = malloc(n * sizeof(int));
	return  p;

}
float mediana(int *vetor , int n){
    if ((n-1) % 2 == 0) {
        return vetor[(n-1)/2];                          // N = ÍMPAR
    } else {
        return (vetor[(n-1)/2] + vetor[n/2])/2.00;      //N = PAR
    }
}
int main()
{
    float med;
    int n,i;
    int *vetor;

    scanf("%d", &n);
    vetor = criaVetor(n);
    pegaVetor(vetor,n);

    qsort(vetor,n,sizeof(int),cmpfunc);

    med = mediana(vetor ,n);
    printf("%.2f  ", med);

}

#include <stdio.h>
#include <stdlib.h>

void pegaVetor_verifica(int * veri , int * p , int n) 
{
	int i;
	for (i = 0; i < n; i++) 
	{
		scanf("%d", p + i);
		veri[i] = -1;
	}
}

int * criaVetor(int n) 
{
	int * p = malloc(n * sizeof(int));
	return  p;

}

void frequencia(int *freq, int *p, int n) 
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		
		int cont = 1;
		for (j = i + 1; j < n; j++) 
		{
			if (p[i] == p[j])
			{
				cont++;
				freq[j] = 0;
			}
		}
		if (freq[i] != 0)
		{
			freq[i] = cont;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (freq[i] > 1)
		{
			printf("%d--%d ", p[i], freq[i]);
		}
	}

}

int main() 
{
	int * vetor, * veri, n;
	scanf("%d", &n);
	vetor = criaVetor(n);
	veri = criaVetor(n);

	pegaVetor_verifica(veri,vetor,n);
	frequencia(veri,vetor, n);
	
	free(vetor);
	free(veri);


}
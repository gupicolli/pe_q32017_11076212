#include <stdio.h>


int * soma(int * vetor1, int * vetor2) {
	int i = 0;
	for (; i < 5; i++) {
		vetor1[i] += vetor2[i];
	}
	return vetor1;
}

void scanVetor(int * vetor) {
	scanf("%d%d%d%d%d", vetor, vetor + 1, vetor + 2, vetor + 3, vetor + 4);
}

void printVetor(int * vetor) {
	int i = 0;
	for (; i < 5; i++) { printf("%d ", vetor[i]); }
}

int main() {
	int v1[5], v2[5];
	
	scanVetor(v1);
	scanVetor(v2);
	
	int *v3 = soma(v1, v2);
	
	printVetor(v3);

}
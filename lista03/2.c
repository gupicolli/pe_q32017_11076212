#include <stdio.h>
#include <string.h>
char *inverte(char * vetor) {
	int tamanho = strlen(vetor);
	int muda, i, j;
	for (i = 0, j = tamanho - 1; i < j; i++, j--) {
		muda = vetor[i];
		vetor[i] = vetor[j];
		vetor[j]= muda;
	}
	return vetor;
}








int main() {
	char entrada[255];
	fgets(entrada, 255, stdin);
	printf("%s", inverte(entrada));
	return 0;



}

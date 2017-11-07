#include <stdio.h>
void criaMatriz(int mat[3][3]) {
	int i, j;
	
	for (i=0; i < 3; ++i) {
		for (j=0; j < 3; ++j) {
			scanf("%d", &mat[j][i]);
			
		}

	}
}
void printMatriz(int mat[3][3]) {
	int i, j;
	for (i=0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (j != 2) { printf("%d ", mat[i][j]); }
			else        { printf("%d\n", mat[i][j]); }
		}
	}
}


int main() {
	int mat[3][3];
	criaMatriz(mat);
	printMatriz(mat);
}
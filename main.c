#include <stdio.h>

#define MOV_TOWER 5
#define MOV_BISCEOP 5
#define MOV_QUEEN 8

int main() {
	unsigned int i;

	printf("Movimento da Torre: \n");
	for (i = 1; i <= MOV_TOWER; i++) {
		printf("Direita\n");
	}

	printf("Movimento do Bispo: \n");
	i = 1;
	while (i <= MOV_BISCEOP) {
		printf("Cima, Direita\n");

		i++;
	}

	printf("Movimento da Rainha: \n");
	i = 1;
	do {
		printf("Esquerda\n");

		i++;
	} while (i <= MOV_QUEEN);


	return 0;
}
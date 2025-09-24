// Requisitos funcionais
//
//
// 1. Entrada de Dados: Os valores para o n�mero de casas a serem movidas(duas para baixo, uma para a esquerda) devem ser definidos no c�digo como vari�veis ou constantes.
//
// 2. L�gica de Movimenta��o: O programa dever� implementar a l�gica espec�fica do movimento em "L" do Cavalo usando loops aninhados(um loop for e um loop while ou do - while).
//
// 3. Sa�da de Dados: O programa dever� imprimir no console a dire��o de cada etapa do movimento do Cavalo("Baixo", "Baixo", "Esquerda"), utilizando o comando printf.Para as outras pe�as as sa�das devem seguir o padr�o : printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");.Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.

#include <stdio.h>

#define TOWER_MOV 5
#define BISHOP_MOV 5
#define QUEEN_MOV 8

#define HORSE_VERTICAL_MOV 2
#define HORSE_HORIZONTAL_MOV 1

int main() {
	unsigned int i, j;
	
	printf("Movimento da Torre: \n");
	for (i = 1; i <= TOWER_MOV; i++) {
		printf("Direita\n");
	}

	printf("\n");

	printf("Movimento do Bispo: \n");
	i = 1;
	while (i <= BISHOP_MOV) {
		printf("Cima, Direita\n");

		i++;
	}

	printf("\n");

	printf("Movimento da Rainha: \n");
	i = 1;
	do {
		printf("Esquerda\n");

		i++;
	} while (i <= QUEEN_MOV);

	printf("\n");

	// Movimento do Cavalo: 2 casas para baixo + 1 para esquerda (loops aninhados)
	printf("Movimento do Cavalo: \n");

	// Loop para movimentos verticais (2 casas para baixo)
	for (i = 1; i <= HORSE_VERTICAL_MOV; i++) {
		printf("Baixo\n");
		j = 1;

		// Executa movimento horizontal (1 casa para esquerda) apenas ap�s o 2� movimento vertical
		while (j <= HORSE_HORIZONTAL_MOV && i == HORSE_VERTICAL_MOV) {
			printf("Esquerda\n");
			j++;
		}
	}

	return 0;
}
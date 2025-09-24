#include <stdio.h>

#define TOWER_MOV 5
#define BISHOP_MOV_VERTICAL 3
#define BISHOP_MOV_HORIZONTAL 2
#define QUEEN_MOV 8
#define HORSE_VERTICAL_MOV 2
#define HORSE_HORIZONTAL_MOV 1

/*
 *	@brief Move a torre para a direita em um número específico de casas
 *
 *	@param value Número de casas para mover a torre
 */
void move_tower(int value) {
	if (value <= 0) return;

	printf("Direita\n");
	move_tower(value - 1);
}

/*
 *	@brief Move o bispo para cima e direita
 *
 *	@param vertical Quantidade de casas na vertical
 *	@param horizontal Quantidade de casas na horizontal
 */
void move_bishop(int vertical, int horizontal) {
	if (vertical <= 0) return;

	for (int i = 0; i < horizontal; i++) {
		printf("Cima, Direita\n");
	}

	move_bishop(vertical - 1, horizontal);
}

/*
 *	@brief Move a rainha para a esquerda em um número específico de casas
 *
 *	Esta é uma função recursiva, caso o parâmetro seja menor ou igual 0 irá interromper o loop
 *
 *	@param value Número de casas para mover a rainha
 */
void move_queen(int value) {
	if (value < 0) return;

	printf("Esquerda\n");
	move_queen(value - 1);
}

/*
 *	@brief Move o cavalo em L
 *
 *	@param vertical Número de casas na vertical
 *	@param horizontal Número de casas na horizontal
 */
void move_horse(int vertical, int horizontal) {
	for (int i = 1; i <= vertical; i++) {
		printf("Cima\n");
		int j = 1;

		// Na segunda condição verificamos se o valor de i é estritamente
		// igual a quantidade de casas que o cavalo percorre na vertical
		while (j <= horizontal && i == vertical) {
			printf("Direita\n");

			j++;
		}
	}
}

int main() {
	printf("Movimento da Torre: \n");
	move_tower(TOWER_MOV);

	printf("\n");

	printf("Movimento do Bispo: \n");
	move_bishop(BISHOP_MOV_VERTICAL, BISHOP_MOV_HORIZONTAL);

	printf("\n");

	printf("Movimento da Rainha: \n");
	move_queen(QUEEN_MOV);

	printf("\n");

	printf("Movimento do Cavalo: \n");
	move_horse(HORSE_VERTICAL_MOV, HORSE_HORIZONTAL_MOV);

	return 0;
}

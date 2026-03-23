#include "logic.h"

int rand_dice() {
	return rand() % NUMBER_OF_FACES + 1;
}

int sum_of_2_dice() {
	int dice1 = rand_dice();
	int dice2 = rand_dice();
	return dice1 + dice2;
}

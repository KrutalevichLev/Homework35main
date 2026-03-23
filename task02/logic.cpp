#include "logic.h"
#include <ctime>

string detect_fortune() {
	srand(time(0));
	string fortune = "All your hard work will soon pay off.";

	switch (rand() % NUMBER_OF_PREDICTION) {
	case 0: fortune = "You will have good luck and overcome many hardships."; break;
	case 1: fortune = "If we don't change, we don't grow."; break;
	case 2: fortune = "Your creativity will lead you to success."; break;
	case 3: fortune = "A new adventure is waiting for you."; break;
	}

	return fortune;
}


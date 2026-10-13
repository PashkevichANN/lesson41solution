#include "logic.h"

string detect_mood() {
	int n = rand() % MOOD_NUMBER;
	string mood = SHOUTED_MOOD;

	switch(n) {
	case 0: mood = HAPPY_MOOD; break;
	case 1: mood = GOOD_MOOD; break;
	case 2: mood = BAD_MOOD; break;
	case 3: mood = NERVOUS_MOOD; break;

	}

	return mood;
}
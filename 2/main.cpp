#include <iostream>

#include "Move.h"

int main() {

	Move    move1(3, 5);
	Move    move2(1, 10);

	std::cout << "1st move object: ";
	move1.showmove();
	std::cout << "2nd move object: ";
	move2.showmove();

	Move    move_sum = move1.add(move2);

	std::cout << "1st move object + 2nd move object: ";
	move_sum.showmove();

	move_sum.reset();

	std::cout << "Reseted previous result: ";
	move_sum.showmove();

	return 0;
}
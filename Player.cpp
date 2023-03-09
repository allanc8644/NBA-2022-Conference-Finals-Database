#include <iostream>

#include "Player.h"

using namespace std;

int Player::printPTS(int c) {

	return points[c];
}

void Player::setPoints(int PTS[7]) {

	points[7] = PTS[7];
}

int Player::printAST(int c) {
	
	return assists[c];
}

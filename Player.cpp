#include <iostream>

#include "Player.h"

using namespace std;

int Player::printPTS(int c) {

	return points[c];
}

int Player::printAST(int c) {
	
	return assists[c];
}

int Player::printREB(int c) {

	return rebounds[c];
}
float Player::printFGP(int c) {

	return fgPercent[c];
}

int Player::printFGA(int c) {

	return fgAttempts[c];
}

int Player::printFGM(int c) {

	return fgMade[c];
}

#include <iostream>

#include "east.h"
#include "Player.h"

using namespace std;

Player JayTatum(29, 27, 10, 31, 22, 30, 26,
	6, 5, 4, 5, 9, 4, 6,
	8, 5, 6, 8, 12, 9, 10);

void east::printGame1() {
	cout << "					Game 1: FTX Arena, Miami, FL					" << endl;
	cout << " ______________________________________________________________________________________________________________________" << endl;
	cout << endl;
	cout << "					      BOS 107 - MIA 118                          " << endl;
	cout << endl;
	cout << "(F) Jayson Tatum: " << JayTatum.printPTS(0) << " PTS    " << JayTatum.printAST(0) << " AST    " << JayTatum.printREB(0) << " REB    10 / 21 FG(47.6 %)" << endl;
	cout << endl;
	cout << "(F) Grant Williams: 7 PTS    2 AST    1 REB    2/5 FG (40%)" << endl;
	cout << endl;
	cout << "(C) Robert Williams III: 18PTS    1 AST    9 REB    6/8 FG (75%)" << endl;
	cout << endl;
	cout << "(G) Jaylen Brown: 24 PTS    3 AST    10 REB    7/17 FG (41.2%)" << endl;
	cout << endl;
	cout << "(G) Derrick White: 3 PTS    4 AST    0 REB    1/4 FG (25%)" << endl;
}

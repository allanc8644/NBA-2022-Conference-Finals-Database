#include <iostream>

const int gameNum = 6;

class Player {

private:
	int points[6];
	int assists[7];
	int reb[7];
	float fgPercent[7];
	int fgA[7];
	int fGM[7];

public:
	
	int printPTS(int c) {

		return points[c];
	}
	void setAssists(int asts);
	void setRebounds(int rebounds);
	void setPercent(float percentage);
	void setAttepts(int attempt);
	void setMade(int made);

	Player(int[]);
	//set gets
	//look at page 772 in book
	//when in player stats create object for player
	//Player JayTatum;
	//Jaytatum.setPoints(29, ) for game 1

};

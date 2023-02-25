#include <iostream>

class Player {

private:
	int *points[7];
	int *assists[7];
	int *reb[7];
	float *fgPercent[7];
	int *fgA[7];
	int *fGM[7];

public:
	void setPoints(int pts);
	void setAssists(int asts);
	void setRebounds(int rebounds);
	void setPercent(float percentage);
	void setAttepts(int attempt);
	void setMade(int made);

	void printPTS();

	//set gets
	//look at page 772 in book
	//when in player stats create object for player
	//Player JayTatum;
	//Jaytatum.setPoints(29, ) for game 1

};

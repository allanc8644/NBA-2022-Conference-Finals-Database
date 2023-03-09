#include <iostream>

const int gameNum = 6;

class Player {

private:
	int points[7];
	int assists[7];
	int reb[7];
	float fgPercent[7];
	int fgA[7];
	int fGM[7];

public:
	
	int printPTS(int c);
	void setPoints(int[]);
	void setAssists(int asts);
	void setRebounds(int rebounds);
	void setPercent(float percentage);
	void setAttepts(int attempt);
	void setMade(int made);

	Player(int p1, int p2, int p3, int p4, int p5, int p6, int p7)
		: points{ p1,p2,p3,p4,p5,p6,p7} {};
	
};

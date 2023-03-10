#include <iostream>


class Player {

private:
	int points[7];
	int assists[7];
	int rebounds[7];
	float fgPercent[7];
	int fgAttempts[7];
	int fGMade[7];

public:
	
	int printPTS(int c);
	int printAST(int c);

	void setPoints(int[]);
	void setAssists(int asts);
	void setRebounds(int rebounds);
	void setPercent(float percentage);
	void setAttepts(int attempt);
	void setMade(int made);

	Player(int p1, int p2, int p3, int p4, int p5, int p6, int p7,
		   int a1, int a2, int a3, int a4, int a5, int a6, int a7,
		   int r1, int r2, int r3, int r4, int r5, int r6, int r7)
		: points{ p1,p2,p3,p4,p5,p6,p7 }, assists{ a1, a2, a3, a4, a5, a6, a7 }, rebounds{ r1, r2, r3, r4, r5, r6, r7 } {};
	
};

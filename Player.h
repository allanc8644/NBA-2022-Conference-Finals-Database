
class Player {

private:
	int points[7];
	int assists[7];
	int rebounds[7];
	float fgPercent[7];
	int fgAttempts[7];
	int fgMade[7];
	std::string name;

public:
	
	int printPTS(int c);
	int printAST(int c);
	int printREB(int c);
	float printFGP(int c);
	int printFGA(int c);
	int printFGM(int c);


	Player(int p1, int p2, int p3, int p4, int p5, int p6, int p7,
		   int a1, int a2, int a3, int a4, int a5, int a6, int a7,
		   int r1, int r2, int r3, int r4, int r5, int r6, int r7,
		   float fgp1, float fgp2, float fgp3, float fgp4, float fgp5, float fgp6, float fgp7,
		   int fga1, int fga2, int fga3, int fga4, int fga5, int fga6, int fga7,
		   int fgm1, int fgm2, int fgm3, int fgm4, int fgm5, int fgm6, int fgm7)
		: points{ p1,p2,p3,p4,p5,p6,p7 }, assists{ a1, a2, a3, a4, a5, a6, a7 },
		rebounds{ r1, r2, r3, r4, r5, r6, r7 }, fgPercent{ fgp1, fgp2, fgp3, fgp4, fgp5, fgp6, fgp7 },
		fgAttempts{ fga1, fga2, fga3, fga4, fga5, fga6, fga7 }, fgMade{ fgm1, fgm2, fgm3, fgm4, fgm5, fgm6, fgm7 } {};
	
};

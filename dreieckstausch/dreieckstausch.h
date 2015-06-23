#ifndef _dreieckstausch_h_
#define _dreieckstausch_h_

class dreieckstausch {
public:
	dreieckstausch();
	int get();
	void tausch(int &a, int &b);
	void tausch(float &a, float &b);
	void tausch(double &a, double &b);
	
private:
	int Counter;
};

#endif

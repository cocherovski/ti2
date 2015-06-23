#ifndef _DREIECKSTAUSCH_H_
#define _DREIECKSTAUSCH_H_

class dreieckstausch {
public:
	dreieckstausch();
	int get();
	void tausch(int &a, int &b);
	void tausch(float &a, float &b);
	void tausch(double &a, double &b);
	
private:
	int Counter; // oder static 
};

#endif

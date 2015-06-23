#include "dreieckstausch.h"

dreieckstausch::dreieckstausch():Counter(0) {}; //*professional* **so much wow**

// dreieckstausch::Counter(0); //für static Counter

int dreieckstausch::get() {
	return Counter;
}

void dreieckstausch::tausch(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
	Counter++;
}

void dreieckstausch::tausch(float &a, float &b) {
	float c = a;
	a = b;
	b = c;
	Counter++;
}

void dreieckstausch::tausch(double &a, double &b) {
	double c = a;
	a = b;
	b = c;
	Counter++;
}

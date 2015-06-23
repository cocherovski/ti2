#include <iostream>
#include "dreieckstausch.h"
using namespace std;

void main() {
	dreieckstausch Object1;
	int a = 2, b = 20;
	float fta = 15.03, fb = 12.12;
	double da = -22, db = 44;
	
	Object1.tausch(a, b);
	Object1.tausch(fa, fb);
	Object1.tausch(da, db);

  cout << a << '\t' << b << endl;
	cout << fa << '\t' << fb << endl;
	cout << da << '\t' << db << endl;
	cout << "==== " << Object1.get() << " ====" << endl;

  dreieckstausch Object2;
  Object2.tausch(a, b);
  cout << Object2.get() << endl;
  
  cout << " :) " << endl;
}

#include "Beispiel.h"
#include "main.h"
#include <iostream>
using namespace std;

extern int maxVol = 200; // Wert Zuweisung, global, Datensegment, Definition
// extern const int maxVol = 200;

int main(){
	int x = maxVol;

	myClass myObject;
	int z = myObject.myMethod;
	return 0;
}

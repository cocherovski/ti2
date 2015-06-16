#ifndef  Beispiel_h_
#define Beispiel_h_

//int minVol -> Linkerproblem
//int minVol=0 -> Linkerproblem
const int minVol=0;	// const mit Def funktioniert, const -> Code-Segment, ohne const -> Daten-Segment (globale Variable)

extern int maxVol;	// das ist die Lösung, "es wird ein maxVol geben, Wert wird später definiert", echte Deklaration
// extern const int maxVol;

#define MAXSPEED 200	// symbolisches debuggen geht nicht, nur magic number sichtbar (200), nicht MAXSPEED

class myClass{
public:
	int myMethod();
};

#endif

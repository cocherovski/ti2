int a;  // Typisierung: Speichergröße, Robustheit (Sicherheit, Fehler früh erkennen)

int fkt(int x)  //  Call-By-Value, -> Kopie, Sicher
                    - nur ein Rückgabewert
                    - Speicherverbrauch, Performance
                    
int *fkt(int *x) // + Call-By-Reference, Pointer
                    + keine Kopie -> wenig Speicherverbrauch
                    + mehrere Rückgaben möglich
                    - nicht robust gegen Pointerfehler
                    
int fkt(int &x) //  Referenz Parameter, Alias
                    + kein zusätzlicher Speicher notwendig
                    + mehrere Rückgaben möglich
_________________________________________________________________________

const int a;  // konstantes Objekt a, Read-Only
const int &y = a; // Referenz Alias auf konstantes Objekt a
_________________________________________________________________________
class myClass {
  private:
    const int x;
}

myClass::myClass():x(5) { // Listeninitialisierung -> const Wert zuweise
  x =5 // nicht möglich da const
}
_________________________________________________________________________
const int * Ptr; // Pointer auf konstantes Objekt -> *Ptr=0; -> Fehler
int * const Ptr; // konstanter Pointer auf Objekt -> Ptr=0xAdr. -> Fehler
const int * const Ptr; // konstanter Pointer auf konstantes Objekt
_________________________________________________________________________
const int *& z=Ptr; // Referenz Pointer auf konstantes Objekt;

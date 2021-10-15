#include <iostream>
#include "../head/calc.h"

using namespace std;

int main() {
    CCalc *pC1, *pC2;
    pC1 = new CCalc();         // default construcotr
    pC2 = new CCalc(1, 2);     // constructor(引数有り)
    cout << 3 << " + " << 4 << " = " << pC1->add(3, 4) << endl;
    cout << pC2->getA() << " + " << pC2->getB() << " = " << pC2->add() << endl;
    delete pC1;
    delete pC2;
}

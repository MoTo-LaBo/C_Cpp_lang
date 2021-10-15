#include "../head/A.h"
#include "../head/B.h"
#include <iostream>

using namespace std;

B::B(A* pA) {
    m_pA = pA;
}

B::~B() {

}

void B::hoge() {
    cout << "bar" << endl;
    m_pA->foo();
}

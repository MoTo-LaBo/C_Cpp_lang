#include "../head/ambulance.h"
#include <iostream>

using namespace std;

// constructor
CAmbulance::CAmbulance() : m_number(119) {
    cout << "CAmbulance object 生成" << endl;

}

// destructor
CAmbulance::~CAmbulance() {
    cout << "CAmbulance object 破棄" << endl;
}

void CAmbulance::sevePeople() {
    cout << "救急救命活動" << endl << "呼び出しは" << m_number << "番" << endl;
}

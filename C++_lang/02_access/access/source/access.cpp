#include "../head/access.h"

#include <iostream>

using namespace std;

void Access::func1() {
    cout << "func1" << endl;
    a = 1;
    b = 1;
    func2();
}

void Access::func2() {
    a = 2;
    b = 2;
    // clang-format off
    cout << "a=" << a << "," << "b=" << b << endl;
    // clang-format on
}

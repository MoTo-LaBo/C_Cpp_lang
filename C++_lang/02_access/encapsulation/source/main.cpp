#include <iostream>
#include "../head/encap.h"

using namespace std;

int main() {
    Encap s;
    s.setNum(5);
    cout << s.getNum() << endl;
    return 0;
}

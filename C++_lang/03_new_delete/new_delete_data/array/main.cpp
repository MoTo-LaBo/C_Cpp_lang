#include <iostream>

using namespace std;

int main() {
    int *p = 0;
    int i;
    p = new int[10];      // int型 10個分の領域を動的に確保
    for (i = 0; i < 10; ++i) {
        p[i] = i;
        cout << p[i] << endl;
    }
    delete[] p;          // 動的に確保した領域を解放 : [ ] を忘れずに付ける
    return 0;
}

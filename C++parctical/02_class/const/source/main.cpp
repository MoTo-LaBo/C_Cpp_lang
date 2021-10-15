#include <iostream>
#include <string>
#include "../head/const.h"

using namespace std;

int main() {
    CConst c;
    cout << "定数" << c.m_cst << endl;
    c.setStr("ABC");                     // 値の設定
    cout << c.getStr() << endl;          // 値の取得
    return 0;
}

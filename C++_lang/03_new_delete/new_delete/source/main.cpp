#include "../head/car.h"
#include <iostream>

using namespace std;

int main() {
    CCar* pC = 0;
    pC = new CCar();    // instance 生成
    pC->supply(10);     // 燃料補給
    pC->move();         // 移動
    pC->move();         // 移動
    delete pC;          // instance 消去
    cout << "instance の消去終了" << endl;
    return 0;
}

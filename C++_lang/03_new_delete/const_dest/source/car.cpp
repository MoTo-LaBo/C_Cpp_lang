#include "../head/car.h"
#include <iostream>

using namespace std;

// constractor(コンストラクタ) : 主に初期化処理を行う
CCar::CCar() : m_fuel(0), m_migration(0) {
    cout << "CCar objcet 生成" << endl;
}

// destractor(デストラクタ) : 終了処理
CCar::~CCar() {
    cout << "~CCar object 破棄" << endl;
}

void CCar::move() {
    // 燃料があるなら移動
    if (m_fuel > 0) {
        m_migration++;  // 距離移動
        m_fuel--;       // 燃料消費
    }
    cout << "移動距離" << m_migration << endl;
    cout << "燃料消費" << m_fuel << endl;
}
// 燃料補給 method
void CCar::supply(int fuel) {
    if (fuel > 0) {
        m_fuel += fuel;  // 燃料補給
    }
    cout << "燃料" << m_fuel << endl;
}

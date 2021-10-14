#include "../head/rat.h"
#include <iostream>

using namespace std;

// ネズミの数の初期値を 0 に設定 : static を付けると program の最初の1回しか実行されない
int CRat::m_count = 0;

// constructor
CRat::CRat() : m_id(0) {
    m_id = m_count;      // ネズミの数を ID とする
    m_count++;           // ネズミの数を一つ増やす
}

// destructor
CRat::~CRat() {
    cout << "ネズミ:" << m_id << "消去" << endl;
    m_count--;          // ネズミの数を一つ減らす
}

// ネズミの数を出力
void CRat::showNum() {
    cout << "現在のネズミは -> " << m_count << " 匹です " << endl;
}

// ネズミの紹介
void CRat::squeak() {
    cout << m_id << ":" << "Tom です" << endl;
}

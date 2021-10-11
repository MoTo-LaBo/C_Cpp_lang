#include <iostream>
#include "../head/class.h"

using namespace std;

int main() {
    // Class obj;        // Class インスタンス化
    // int num;

    // cout << "整数を入力して下さい: ";
    // cin >> num;


    // obj.set(num);                  // Class の メンバ変数をセット
    // cout << obj.get() << endl;     // メンバ変数の値を出力

    /* ----------- 複数のインスタンス ----------- */
    Class obj1, obj2;             // class のインスタンスを複数生成

    obj1.set(1);                  // obj1のset method 呼び出し
    obj2.set(2);                  // obj2のset method 呼び出し

    cout << obj1.get() << endl;   // obj1の メンバ変数の値を出力
    cout << obj2.get() << endl;   // obj2の メンバ変数の値を出力

    return 0;
}

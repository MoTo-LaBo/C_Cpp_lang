#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> li;
    li.push_back(1);          // 後ろに data を挿入
    li.push_back(2);          // 後ろに data を挿入
    li.push_front(3);         // 前に data を挿入
    list<int>::iterator itr;
    // data 挿入
    itr = li.begin();         // iterator を先頭に設定
    itr++;                    // １つ移動
    li.insert(itr, 4);        // 値の挿入
    // data の表示
    for (itr = li.begin(); itr != li.end(); itr++) {
        cout << *itr << "";
    }
    cout << endl;
    return 0;
}

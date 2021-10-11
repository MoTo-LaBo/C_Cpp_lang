#include <iostream>
#include <string>

using namespace std;

int main() {
    // int a;
    // cin >> a;     // console からの入力(keyboardから) : cin を使用
    // cout << "a=" << a << endl;

    // 文字列での扱い
    string s, t;
    t = "入力された文字列は,";
    cout << "文字列を入力: ";
    cin >> s;
    cout << t + s << "です" << endl;
    return 0;
}

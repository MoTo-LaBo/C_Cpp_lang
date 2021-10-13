#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    s = "This is a";       // 最初の文字列
    s.append("pen.");      // 文字列の追加
    cout << s << endl;
    cout << "文字列の長さ: " << s.length() << endl;
    // pritnf で表示
    printf("char*:%s\n", s.c_str());  // char型に変換
    return 0;
}

/* string型と char型は互換性がない　->　C言語のchar型にする場合は型変換が必要 */

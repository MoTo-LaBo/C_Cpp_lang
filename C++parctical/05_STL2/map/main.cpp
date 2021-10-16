#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> score;          // map data構造を用意
    string names[] = {"Tom", "Bob", "Mike"};
    score[names[0]] = 100;           // key と値を関連付け : 1, Tom:100
    score[names[1]] = 80;            // key と値を関連付け : 2, Bob:80
    score[names[2]] = 120;           // key と値を関連付け : 3, Mike:120
    int i;
    for (i = 0; i < 3; i++) {
        cout << names[i] << ":" << score[names[i]] << endl;
    }
    return 0;
}

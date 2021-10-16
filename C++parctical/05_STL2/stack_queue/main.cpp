#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    stack<int> stk;             // stack の data を宣言
    queue<int> que;             // queue の data を宣言
    int data[] = {1, 2, 3};     // 登録する data
    int i;
    // data の登録
    for (i = 0; i < 3; i++) {
        stk.push(data[i]);
        que.push(data[i]);
    }
    // data の出力
    cout << "stack : ";
    while (!stk.empty())
    {
        // topで要素を取得し, pop でその要素を stk から取り除く(2段階の作業が必要)
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    cout << "queue : ";
    while (!que.empty()) {
        // front で要素を取得し, pop でその要素を que から取り除く(2段階の作業が必要)
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
    return 0;
}

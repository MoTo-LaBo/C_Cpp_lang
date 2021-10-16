#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "../head/bird.h"

// ニワトリ class
class CChicken : public CBird {
public:
    // 「鳴く」関数(仮想関数)
    void sing() {cout << "クックルドゥードゥ" << endl;}
    // 「飛ぶ」関数
    void fly() {cout << "鶏は飛べません" << endl;}
};

#endif // _CHIKEN_H_

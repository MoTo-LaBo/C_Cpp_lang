#ifndef _CONST_H_
#define _CONST_H_

#include <iostream>
#include <string>

using namespace std;

class CConst {
private:
    string m_str;
public:
    CConst();
    void setStr(const string str);        // 引数を const に
    string getStr() const;                // メンバ関数の const
public:
    static const int m_cst = 100;         // 定数
};

#endif // _CONST_H_

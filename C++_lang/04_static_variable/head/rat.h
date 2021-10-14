#ifndef _RAT_H_
#define _RAT_H_

class CRat {
public:
    // constructor
    CRat();
    // destructor
    ~CRat();
    // ネズミの数の出力
    static void showNum();
    // ネズミの紹介
    void squeak();
private:
    // ネズミの番号
    int m_id;
    // ネズミの数
    static int m_count;
};

#endif // _RAT_H_

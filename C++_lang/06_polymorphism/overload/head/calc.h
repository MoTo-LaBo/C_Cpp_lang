#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
private:
    int m_a, m_b;
public:
    // default constructor
    CCalc();
    // constructor
    CCalc(int a, int b);
    // 足し算処理その１ : オーバーロード
    int add();
    // 足し算処理その２ (引数付き) : オーバーロード
    int add(int a, int b);
    // 値の設定
    void setValue(int a, int b);
    // 値の取得(m_a)
    int getA();
    // 値の取得(m_b)
    int getB();
};

#endif // _CALC_H_

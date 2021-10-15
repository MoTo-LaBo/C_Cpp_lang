#ifndef _B_H_
#define _B_H_

class A;              // class A への参照

class B {
private:
    A * m_pA;
public:
    B(A* pA);        // constructor
    virtual ~B();    // destructor
    void hoge();
};

#endif // _B_H_

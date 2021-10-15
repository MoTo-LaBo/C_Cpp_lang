#ifndef _A_H_
#define _A_H_

class B;   // class B への参照

class A
{
private:
    B * m_pB;
public:
    A();             // constructor
    virtual ~A();    // destructor
    void foo();
    void bar();
};

#endif // _A_H_

#ifndef _ACCESS_H_
#define _ACCESS_H_

class Access {
public:
    int a;  // public なメンバ変数
private:
    int b;  // private なメンバ変数
public:
    void func1();
private:
    void func2();
};

#endif  // _ACCESS_H_

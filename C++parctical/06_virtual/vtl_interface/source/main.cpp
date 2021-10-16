#include <iostream>
#include "../head/IInf1.h"
#include "../head/IInf2.h"
#include "../head/Sample.h"

// IInf1のみが使いえる関数
void foo(IInf1*);

// IInf2のみが使える関数
void bar(IInf2*);

int main() {
    CSample * s = new CSample();
    foo((IInf1*)s);
    bar((IInf2*)s);
    return 0;
}

// IInf1のみが使える関数
void foo(IInf1* p) {

    p->func1();
    p->func2();
}

// IInf2のみが使える関数
void bar(IInf2* p) {

    p->func3();
    p->func4();
}

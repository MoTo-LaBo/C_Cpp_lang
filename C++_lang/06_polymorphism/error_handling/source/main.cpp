#include "../head/sample.h"

int main() {
    Sample* p1, *p2;
    p1 = new Sample(1);  // 引数のある constructor
    // p2 = new Sample();   // default contstructor error になる
    return 0;
}

/*
    constructor が他に定義されていないのであれば, costructor は記述しなくても良い
    1つでも引数有りの constructor がある場合は, default constructor を .h file
    に記述しないと使用できない。 error が出てしまう
*/

#include <stdio.h>

// 平均値を求める関数の定義
double avg(double l, double m)
{
    // 引数　l, m の平均値を求め, r に代入
    double r = (l + m) / 2.0;
    return r;
}

int main(void)
{
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 2.7;
    // 同じ計算が３回(関数を呼び出して計算)
    d1 = avg(a, b);
    d2 = avg(4.1, 5.7);
    d3 = avg(c, 2.8);
    printf("d1 = %f. d2 = %f. d3 = %f\n", d1, d2, d3);
}

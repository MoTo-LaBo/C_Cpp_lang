#include <stdio.h>
/*
    Cast(キャスト) : data型変換
*/

void main()
{
    int i1, i2, j1, j2;
    double d1, d2, e1, e2;
    /* j1, j2 に値を代入（初期化）する */
    j1 = 3;
    j2 = 3;
    /* d1, d2 に値を代入（初期化）する */
    d1 = 1.23;
    d2 = 1.23;
    /* i1, i2 に d1, d2の値を代入(初期化)する */
    i1 = d1;      // 普通に代入する（初期化）
    i2 = (int)d2; // castして代入（初期化）
    /* e1, e2 に j1, j2 を代入（初期化）する */
    e1 = j1;         // 普通に代入する（初期化）
    e2 = (double)j2; // castして代入（初期化）
    printf("d1 = %f d2 = %f\n", d1, d2);
    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("j1 = %d j2 = %d\n", j1, j2);
    printf("e1 = %f e2 = %f\n", e1, e2);
}

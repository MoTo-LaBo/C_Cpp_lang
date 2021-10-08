#include <stdio.h>

int main(void)
{
    // サイズ SIZE の配列を用意する
    double d[3] = {0.2, 0.4, 0.6};
    double *p1 = NULL, *p2 = NULL;
    int i;
    p1 = d; // p1 に d の address を入力
    p2 = d;
    for (i = 0; i < 3; i++)
    {
        printf("%f %f %f\n", *(d + i), p1[i], *p2);
        p2++; // p2 の address を インクリメント
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h> // rand関数を使用できる
#include <time.h>   // time関数を使用できる : 時間を取得する関数

int main(void)
{
    int a, b;
    // 乱数の初期化
    srand((unsigned)time(NULL));
    // 1 ~ 10 までの乱数を発生させる
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    // 計算結果を出力
    printf("%d + %d = %d\n", a, b, a + b);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* ---------- 文字列から数値へ変換 ---------- */

    // char s1[] = "1000";
    // char s2[] = "12.345";
    // int a;
    // double b;
    // // 文字列を数字に変換(実数で変換・表示してくれる)
    // a = atoi(s1);
    // b = atof(s2);
    // printf("a=%d b=%f\n", a, b);
    // return 0;

    /* ---------- 数値から文字列へ変換 ---------- */

    char s1[256], s2[256];
    int a = 100, b = 200;
    // 改行つきの printf のようなモノ
    sprintf(s1, "%d", a);
    sprintf(s2, "bの値は%dです", b);
    puts(s1);
    puts(s2);
    return 0;
}

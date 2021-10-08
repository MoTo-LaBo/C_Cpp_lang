#include <stdio.h>

int main(void)
{
    // pointer を　NULL で初期化
    int *p = NULL;
    // address を指定しないまま値を代入
    *p = 1;
}
/* 実行はできるが address を指定をしなかった為に以上終了する */

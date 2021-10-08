#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main(void)
{
    int *p1 = NULL;
    double *p2 = NULL;
    int i;
    // 配列の生成 : malloc (マロック)　メモリを生成してくれる / define 3 を掛けている
    p1 = (int *)malloc(sizeof(int) * SIZE);
    p2 = (double *)malloc(sizeof(double) * SIZE);
    // 値の代入
    for (i = 0; i < SIZE; i++)
    {
        p1[i] = i;
        p2[i] = i / 10.0;
    }
    // 結果の出力
    for (i = 0; i < SIZE; i++)
    {
        printf("p1[%d]=%d p2=[%d]=%f\n", i, p1[i], i, p2[i]);
    }
    // memory の解放 : malloc で生成したモノは必ず解放しなければならない
    free(p1);
    free(p2);
    return 0;
}
/* malloc (マロック)処理 : memory を動的に生成して確保する(非常によく使用される処理)
        8性質 : 好きな時に生成できて, 好きな時に解放できる (ヒープ領域で memory 確保)*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("数値を入力: ");
    // キーボードから整数を入力
    scanf("%d", &a);
    // 入力した値が正の数かどうかを調べる
    if (a > 0)
    {
        printf("入力した値は、正の数です\n"); // 正の数だったあ場合に実行
    }
    else
    {
        printf("入力した値は、正の数ではありません\n"); // 正の数でなかった場合
    }
    return 0;
}

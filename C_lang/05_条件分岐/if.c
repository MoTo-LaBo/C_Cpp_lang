#include <stdio.h>

int main(void)
{
    /*
    int num;
    printf("1 ~ 3の値を入力して下さい: ");
    // キーボードから整数を入力
    scanf("%d", &num);
    // 入力した値が正の数かどうかを調べる
    if (num == 1)
    {
        printf("one\n"); // numが1だった場合に実行
    }
    else if (num == 2)
    {
        printf("two\n"); // numが2だった場合に実行
    }
    else if (num == 3)
    {
        printf("three\n"); // numが3だった場合に実行
    }
    else
    {
        printf("不適切な値です\n"); // それ以外の値が入力された場合の処理
    }

    return 0;
    */
    /*　--------------- 複雑な if文 --------------- */
    int dice;
    // サイコロの目を入力
    printf("1から6の数値を入力して下さい");
    scanf("%d", &dice);
    // 値がサイコロの目の範囲内かどうかを調べる
    if (1 <= dice && dice <= 6)
    { // サイコロの目が、奇数か偶数で処理を分ける
        if (dice == 2 || dice == 4 || dice == 6)
        {
            printf("丁（チョウ）です\n"); // 偶数なら丁（チョウ）
        }
        else
        {
            printf("半（ハン）です\n"); // 奇数ならハン（ハン）
        }
    }
    else
    {
        printf("範囲外の数値です\n");
    }
    return 0;
}

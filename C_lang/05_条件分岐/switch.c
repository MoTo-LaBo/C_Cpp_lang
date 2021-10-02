#include <stdio.h>

int main(void)
{
    int num;
    printf("1~3の値を入力してください: ");
    // 整数を入力
    scanf("%d", &num);
    // 入力した値が、正の数かどうかを調べる
    switch (num)
    {
    case 1:
        printf("one\n"); // numが１だったら処理
        break;
    case 2:
        printf("two\n"); // numが２だったら処理
        break;
    case 3:
        printf("three\n"); // numが３だったら処理
        break;
    default:
        printf("不適切な値です\n"); // それ以外の値が入力されたら処理
        break;
    }
    return 0;
    // berak は必ずつける事！！
}

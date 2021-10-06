#include <stdio.h>
#include <math.h> // 数学関連のライブラリ

// compile に命令を出す -> PI とでたら 3.14 と認識して下さい
/* define は定数を定義したい時に使用する習わし: 定数は基本大文字 */
#define PI 3.14

int main(void)
{
    int angle;
    double rad;
    printf("角度を入力して下さい(0~360): ");
    scanf("%d", &angle);
    // 角度をラジアンに変換
    rad = PI * (double)angle / 180.0;
    // 三角関数での計算
    printf("sin(%d)=%f\n", angle, sin(rad));
    printf("cos(%d)=%f\n", angle, cos(rad));
    printf("tan(%d)=%f\n", angle, tan(rad));
}

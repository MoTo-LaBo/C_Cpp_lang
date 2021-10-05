#include <stdio.h>

// global変数 : source code 全体で使用できる
/* １つ変えたら全て変わってしまうので使用の場合はそこを加味する
・ global変数にはなるべく使わない方が良いとされている
    - セキュリティ観点でもリスクがある
・ メモリを消費する -> program が終了するまでメモリが確保される
    - local 変数 -> localの処理が終われば解放される */
int global = 10;

// prototype宣言
void func1(double, int);
void func2();

int main(void)
{
    double a = 123.41;
    int b = 100;
    printf("main処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("***************\n");
    // func1を呼び出し
    func1(3.1, 4);
    // func2を呼び出し
    func2();
}

// func1
void func1(double a, int b)
{
    printf("func1処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("***************\n");
}

// func2
void func2()
{
    double a = -4.1;
    int b = 2;
    printf("func2処理中\n");
    printf("global=%d\n", global);
    printf("a=%f b=%d\n", a, b);
    printf("***************\n");
}

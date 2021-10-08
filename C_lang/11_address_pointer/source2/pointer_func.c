#include <stdio.h>

// 変数の値を入れ替えを行う
void swap(int *, int *);

int main(void)
{
    int a = 1, b = 2;
    printf("a = %d b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

// 値の入れ替え
/* pointer を渡すという事は、address を渡す事になる = 参照渡しと同じような振る舞いをする
　return で返さなくとも関数内で変更された値は　pointer 基の値も一緒に変更されている */
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

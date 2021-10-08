#include <stdio.h>

void show(int, int, int);

int main(void)
{
    int a = 100;   // 整数型変数a
    int b = 200;   // 整数型変数b
    int *p = NULL; // 整数型のpointer変数p
    p = &a;        // p に a の address を代入
    show(a, b, *p);
    *p = 300; // *p に値を代入
    show(a, b, *p);
    p = &b; // *p に値を代入
    show(a, b, *p);
    *p = 400; // *p に値を代入
    show(a, b, *p);
}

void show(int n1, int n2, int n3)
{
    printf("a = %d b = %d *p = %d\n", n1, n2, n3);
}

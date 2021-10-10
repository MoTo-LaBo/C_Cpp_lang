#include <stdio.h>

void foo();

int main(void) {
    int i;
    for (i = 0; i < 4; i++) {
        foo();
    }
    return 0;
}

void foo() {
    static int num = 0;  // 最初に一度だけ実行される
    printf("num=%d\n", num);
    num++;
}

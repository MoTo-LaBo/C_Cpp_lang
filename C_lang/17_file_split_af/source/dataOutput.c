#include "../header/dataOutput.h"

#include <stdio.h>

// error message : extern -> 外部で定義された global変数を共有するための関数
extern int Error;

// 学生 data の表示
void showStudentData(student* data) {
    if (data != NULL) {
        printf("学生番号: %d 名前: %s\n", data->id, data->name);
    } else {
        printf("data が登録されていません。\n");
    }
}

// error の表示
void showError() {
    switch (Error) {
        case MESSAGE_OK:
            printf("OK\n");
            break;
        case MESSAGE_ERROR:
            printf("ERROR\n");
            break;
    }
}

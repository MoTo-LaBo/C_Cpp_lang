#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// data base に登録できる学生の最大数
#define MAX_STUDENT 10
// 学生の名前の最大の長さ
#define LENGTH 50
// error message の文字列の最大の長さ
#define MESSAGE_LENGTH 256

// error message : enum -> data型定義
enum ERROR { MESSAGE_OK, MESSAGE_ERROR };

// 学生 data
typedef struct {
    int id;             // 学生番号
    char name[LENGTH];  // 名前
} student;

/* ---------- global に使用する変数 ---------- */

// data base に登録されている学生の数
int num = 0;
// 学生の data base
student student_database[MAX_STUDENT];

int Error;

/* ---------- 関数の type 宣言 ---------- */
// data baseの初期化
void initDatabase();
// data base への data 登録(学生番号, 名前)
int add(int, char*);
// 学生の data 取得
student* get(int);
// 学生 data の表示
void showStudentData(student*);
// error の表示
void showError();

/* ---------- maint( ) ---------- */
int main(void) {
    int i;
    char names[][LENGTH] = {"山田太郎", "太田美智子", "大山次郎", "山口さやか"};
    int ids[] = {1, 2, 2, 3};
    initDatabase();
    for (i = 0; i < 4; i++) {  // data の登録
        add(ids[i], names[i]);
        printf("登録:%d %s\n", ids[i], names[i]);
        showError();
    }
    for (i = 0; i < 3; i++) {  // 登録した data の出力
        showStudentData(get(i + 1));
    }
}

// data base の初期化
void initDatabase() {
    int i;
    for (i = 0; i < MAX_STUDENT; i++) {
        student_database[i].id = -1;
        strcpy(student_database[i].name, "");
    }
    Error = MESSAGE_OK;  // error message のクリア
    num = 0;             // 登録された学生の数を 0 に初期化
}

// data base への data の登録 (学生番号, 名前)
int add(int id, char* name) {
    if (get(id) == NULL && num < MAX_STUDENT) {
        student_database[num].id = id;
        strcpy(student_database[num].name, name);
        num++;
        Error = MESSAGE_OK;
        // 登録できれば 1 を返す
        return 1;
    }
    Error = MESSAGE_ERROR;
    // 登録できなかったら 0 を返す
    return 0;
}

// 学生の data 取得
student* get(int id) {
    int i;
    for (i = 0; i < num; i++) {
        if (student_database[i].id == id) {  // 該当する id data があれば
            return &student_database[i];     // pointer を返す
        }
    }
    return NULL;
}

// 学生 data の表示
void showStudentData(student* data) {
    if (data != NULL) {
        printf("学生番号: %d 名前: %s\n", data->id, data->name);

    } else {
        printf("dataが登録されていません。\n");
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

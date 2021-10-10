#include "../header/studentDatabase.h"

#include <string.h>

#define MESSAGE_LENGTH 256  // #define が付くことでここの file でしか使用できなくなる

/* static が付くか付かないかで, 変数の意味が変わってくる！
        ここの file の中でしか使用できない変数になる : extern とは反対 */
// data base に登録されている学生の数
static int num = 0;
// 学生 data base
static student student_database[MAX_STUDENT];
// error message　: 外部と共有できるのは Error だけ
int Error = MESSAGE_OK;

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

// data base への data の登録 (学生番号:id, 名前:name[LENGTH])
int add(int id, char* name) {
    if (get(id) == NULL && num < MAX_STUDENT) {
        student_database[num].id = id;
        strcpy(student_database[num].name, name);
        num++;
        Error = MESSAGE_OK;
        // 登録できていれば 1 を返す
        return 1;
    }
    Error = MESSAGE_ERROR;
    // 登録できていなかったら 0 を返す
    return 0;
}

student* get(int id) {
    int i;
    for (i = 0; i < num; i++) {
        if (student_database[i].id == id) {  // 該当する id dataがあったら
            return &student_database[i];     // pointer を返す
        }
    }
    return NULL;
}

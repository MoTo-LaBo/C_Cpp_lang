#ifndef _STUDENT_DATABASE_H_
#define _STUDENT_DATABASE_H_

// data base に登録できる学生の最大数
#define MAX_STUDENT 10
// 学生の名前の最大の長さ
#define LENGTH 50

// error message
enum ERROR { MESSAGE_OK, MESSAGE_ERROR };

// 学生 data
typedef struct {
    int id;             // 学生番号
    char name[LENGTH];  // 名前
} student;

// data base の初期化
void initDatabase();
// data base への data の登録(学生番号:id, 名前:name[LENGTH])
int add(int, char*);
// 学生 の data の取得
student* get(int);

#endif  //  _STUDENT_DATABASE_H_

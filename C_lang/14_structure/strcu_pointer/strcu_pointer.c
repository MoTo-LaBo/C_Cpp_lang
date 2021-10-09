#include <stdio.h>
#include <string.h>

// 学生データを入れる構造体 : 構造を作成して,名前を与え定義している
// (気持ちとしては変数のように扱える)
typedef struct {
    int id;          // 学生番号
    char name[256];  // 名前
    int age;         // 年齢
} student_data;

// 構造体のデータを表示する関数
void setData(student_data*, int, char*, int);
void showData(student_data*);

int main(void) {
    student_data data[4];
    int i;
    int id[] = {1, 2, 3, 4};
    char name[][256] = {"山田太郎", "佐藤良子", "太田隆", "中田良子"};
    int age[] = {18, 19, 18, 18};
    // データの設定
    for (i = 0; i < 4; i++) {
        setData(&data[i], id[i], name[i], age[i]);
    }
    // データの内訳を表示
    for (i = 0; i < 4; i++) {
        showData(&data[i]);
    }
    return 0;
}

// データセット
void setData(student_data* data, int id, char* name, int age) {
    data->id = id;             // id のコピー
    strcpy(data->name, name);  // 名前のコピー
    data->age = age;           // 年齢のコピー
}
// データの表示
void showData(student_data* data) { printf("学生番号:%d 名前:%s 年齢:%d\n", data->id, data->name, data->age); }

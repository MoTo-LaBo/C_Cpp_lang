#include <stdio.h>
#include <string.h>

// 学生データを入れる構造体
struct student
{
    int id;         // 学生番号
    char name[256]; // 名前
    int age;        // 年齢
};

int main(void)
{
    struct student data;           // 番号を設定
    data.id = 1;                   // 名前を設定
    strcpy(data.name, "山田太郎"); // 名前を設定
    data.age = 18;                 // 年齢を設定
                                   // データの内訳を表示
    printf("学生番号:%d 名前:%s 年齢:%d\n", data.id, data.name, data.age);
    return 0;
}

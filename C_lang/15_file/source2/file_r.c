#include <stdio.h>
#include <stdlib.h>  // file関係を扱うため

// #define SIZE 256  // １行の仮の文字数

int main(void) {
    FILE *file;  // file pointer (読み込み)
    // char line[SIZE];  // 読み込む行
    // line[0] = '\n';   // 初期化(空文字列)

    // file を 1行づつ読み込む
    int c;
    // file を読み込み用に open
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.txt", "r");
    if (file == NULL) {                // open に失敗した場合
        printf("fileを開けません\n");  // error message を返す
        exit(1);                       // 異常終了
    }
    // file の　dataを読み込む : fgets
    // while (fgets(line, SIZE, file) != NULL) {
    //     printf("%s", line);
    // }
    // fclose(file);  // file を8 close

    // file を 1行づつ読み込む : fgetc -> file data を 1文字づつ読み込む
    while ((c = fgetc(file)) != EOF) {
        printf("%c", (char)c);  // int型だったが, char型にキャストして出力
    }
    fclose(file);
}

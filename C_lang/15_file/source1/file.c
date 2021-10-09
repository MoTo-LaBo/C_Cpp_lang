#include <stdio.h>
#include <stdlib.h>  // file 操作には必須 : file関係を扱える

int main(void) {
    FILE* file;  // file pointer 出力用
    // file full path : fileを開く
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.txt", "w");
    // error handling : error message -> 異常終了
    if (file == NULL) {
        printf("fileが開けません\n");  // message
        exit(1);                       // 異常終了
    }
    // ファイルにデータを書き込む
    fprintf(file, "C言語基本入門 \r\n\n");
    fprintf(file, "次は C++言語基本入門\r\n\n");
    fclose(file);  // file を close する
}

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256 // 1行の最大文字数規定

void main()
{
    FILE *file;      // fileポインタ(読み込み用)
    char line[SIZE]; // 読み込む行
    line[0] = "\0";  // 初期化(空文字列): lineの文字列はまだ何もないと宣言
    /* full path : r(読み込み) */
    file = fopen("/Users/moto/udemy/C_C++/C_lang/c_document.txt", "r");
    /* error handling : 読み込めなかった時のお知らせと以上終了*/
    if (file == NULL)
    {
        printf("fileが開けません\n");
        exit(1);
    }

    // file の読み込み fgets() : 読み込みが続く間は NULL 以外が返ってくる。NULL になったら loop break
    while (fgets(line, SIZE, file) != NULL)
    {
        printf("%s", line);
    }
    fclose(file); // file close
}

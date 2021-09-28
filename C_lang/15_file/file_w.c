#include <stdio.h>
#include <stdlib.h>

void main()
{ /* ---------- file の作成 & 書き込み ---------- */
    FILE *file;
    file = fopen("/Users/moto/udemy/C_C++/C_lang/c_document.txt", "w");
    if (file == NULL)
    {
        printf("fileが開けません\n");
        exit(1);
    }

    fprintf(file, "\t--------------- C言語 基礎入門 ---------------\n");
    fprintf(file, "\n\t\t----- file読み込み・書き込み -----\n");
    fprintf(file,
            "\n・file関係の関数を使用する為先頭に\n\t# include < stdlib.h > を読み込む\n\n・file名はフルpath指定");
    fclose(file);

    /* ---------- file 読み込み ---------- */
}

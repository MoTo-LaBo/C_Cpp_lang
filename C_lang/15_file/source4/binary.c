#include <stdio.h>
#include <stdlib.h>

/* malloc (マロック) を使用して, file size分だけ memory を確保してそこに
        binary file を読み込む。元々読み込む file size を規定しているわけではない */
// file の大きさを調べて -> その分の容量確保 -> 読み込み

int main(void) {
    FILE* file;
    int i, size;
    // 書き込むデータ
    char* rdata;
    // binary data の書き込み
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "rb");
    if (file == NULL) {
        printf("file open に失敗しました");
        exit(1);
    }
    // fileの最後までシーク : file を最後まで読み込む -> fileの大きさを取得できる為
    fseek(file, 0, SEEK_END);
    // file の大きさを取得 : ftell で file の大きさを取得
    size = ftell(file);
    // memory size だけ配列を動的に生成
    rdata = (char*)malloc(sizeof(char) * size);
    // 再び先頭に戻って file を読み込む
    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof(char), size, file);
    fclose(file);  // file close
                   // 結果を表示
    for (i = 0; i < size; i++) {
        printf("%x", rdata[i]);
    }
    printf("\n");
    // メモリ解放
    free(rdata);
    return 0;
}

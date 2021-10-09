#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* file;
    int i;
    // 書き込むデータ
    char wdata[] = {0x10, 0x1a, 0x1e, 0x1f};
    char rdata[4];
    // binary data の書き込み
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "wb");
    if (file == NULL) {
        printf("file open に失敗しました");
        exit(1);
    }
    fwrite(wdata, sizeof(char), sizeof(wdata), file);
    fclose(file);  // file close
                   // binary data 書き込み
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "rb");
    if (file == NULL) {
        printf("fileが読み込めません");
        exit(1);
    }
    fread(rdata, sizeof(char), sizeof(rdata), file);
    fclose(file);  // file close
                   // 結果を表示
    for (i = 0; i < sizeof(rdata); i++) {
        printf("%x", rdata[i]);
    }
    printf("\n");
    return 0;
}

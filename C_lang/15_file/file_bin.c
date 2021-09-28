#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    FILE *file;
    int i;
    // 書き込むデータ
    char wdata[] = {0x10, 0x1a, 0x1e, 0x1f};
    char rdata[4];
    // binary data
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "wb");
    // error handling
    if (file == NULL)
    {
        printf("file open に失敗しました\n");
        exit(1);
    }
    fwrite(wdata, sizeof(char), sizeof(wdata), file);
    fclose(file);

    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "rb");
    if (file == NULL)
    {
        printf("file open に失敗しました\n");
        exit(1);
    }
    fread(rdata, sizeof(char), sizeof(rdata), file);
    fclose(file);

    for (i = 0; i < sizeof(rdata); i++)
    {
        printf("%x", rdata[i]);
    }
    printf("\n");
    return 0;
    */
    /* ---------- fileのサイズが分からない時 ---------- */
    FILE *file;
    int i, size;
    // 書き込むデータ
    char *rdata;
    // binary data
    file = fopen("/Users/moto/udemy/C_C++/C_lang/15_file/test.bin", "rb");
    if (file == NULL)
    {
        printf("file open に失敗しました\n");
        exit(1);
    }
    // file の最後まで seek (fileを最後まで読み込む)
    fseek(file, 0, SEEK_END);
    // file の大きさを取得
    size = ftell(file);
    // メモリのsizeだけ、配列を動的に生成
    rdata = (char *)malloc(sizeof(char) * size);
    // fileの先頭に戻る（ポインタを戻す）
    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof(char), size, file);
    fclose(file);

    for (i = 0; i < size; i++)
    {
        printf("%x", rdata[i]);
    }
    printf("\n");
    free(rdata);
    return 0;
}

#include <stdio.h>

int main(void)
{
    // int n[] = {5, 4, 3, 2, 1};
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("n[%d]=%d ", i, n[i]);
    // }
    // printf("\n");

    /* 配列の終わりは宣言しないといけない。 \0 (バックスラッシュ0) */
    char s1[4] = {'a', 'b', 'c', '\0'}; // 文字列 "abc"
    char s2[] = "HelloWorld.";          // 文字列 "HelloWorld." : この形は定義しなくても \0が入る
    char s3[10];                        // 文字列 10文字まで入る
                                        // 文字列入力
    printf("文字列を入力してください :");
    scanf("%s", s3); // 配列の時は &（アンバサンド）はつけない : 文字列入力
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    /* C言語には string の data型は存在しない。文字列の配列を持って文字列とみなす
    C言語は古い言語なので、 string型という data型ができたのは最近の話 */
}

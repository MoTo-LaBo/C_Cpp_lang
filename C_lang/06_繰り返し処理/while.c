#include <stdio.h>

int main(void)
{
    // int i = 0;
    // while (i <= 5)
    // {
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");
    // return 0;

    /*　--------------- do ~ while loop --------------- */
    /* while とほぼ一緒。条件判定が後ろに来るので
       do が1回実行されてその後に続けて実行するかどうかを while で判断する */
    // iを用いた loop
    // int i = 0;
    // do
    // {
    //     printf("%d ", i);
    //     i++;
    // } while (i <= 5);
    // {
    //     printf("\n");
    // }

    /*　--------------- while と do ~ while の違い --------------- */
    // int i, num;
    // printf("回数を入力: ");
    // scanf("%d", &num);
    // // while loop で実行
    // printf("whileで実行\n");
    // i = 1;
    // while (i <= num)
    // {
    //     printf("*");
    //     i++;
    // }
    // printf("\n");
    // // do ~ while loop で実行
    // printf("do ~ whileで実行\n");
    // i = 1;
    // do
    // {
    //     printf("*");
    //     i++;
    // } while (i <= num);
    // printf("\n");

    /*　--------------- 無限 loop  --------------- */
    int num;
    printf("負の値で loop から抜けます\n");
    while (1) // 無限 loop になる
    {
        printf("数値を入力");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
    }
    printf("終了");

    return 0;
}

#include <stdio.h>

int main(void)
{
    // int i;
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("%d ", i);
    // }
    // printf("\n");
    // return 0;

    /*　--------------- for分の二重 loop（ネスト） --------------- */
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d+%d=%d ", i, j, i + j);
        }
        printf("\n");
    }
}

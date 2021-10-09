#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[256], s2[256];
    printf("s1=");
    scanf("%s", s1);
    printf("s2=");
    scanf("%s", s2);
    if (strcmp(s1, s2) == 0)
    {
        printf("s1 と s2 は等しい\n");
    }
    else
    {
        printf("s1 と s2 は等しくない\n");
    }
    return 0;
}

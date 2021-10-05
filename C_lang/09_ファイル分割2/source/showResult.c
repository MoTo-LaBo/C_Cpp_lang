#include "../header/showResult.h"
#include <stdio.h> // C言語標準の printf が使用されいるので必要

/* extern : ans の global変数は他の所で定義されていて
            それを使用しますよ。という風に明示している */
extern int ans;

void showAnswer()
{
    printf("%d\n", ans);
}

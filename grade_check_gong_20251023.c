//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 90)
    {
        printf("等级：A\n");
    }
    else if (score >= 80)
    {
        printf("等级：B\n");
    }
    else if (score >= 70)
    {
        printf("等级：C\n");
    }
    else if (score >= 60)
    {
        printf("等级：D\n");
    }
    else if (score < 60)
    {
        printf("等级：E\n");
    }
    return 0;
}

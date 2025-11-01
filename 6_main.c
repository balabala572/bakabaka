//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[5];
    int i, num, count = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            arr[count] = num;
            count++;
        }
    }
    printf("偶数有：");
    for (i = 0; i < count; i++)
    {
        if (i == 0)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf(" %d", arr[i]);
        }
    }
    return 0;
}

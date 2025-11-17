//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[5];
    int *p = arr;
    printf("请输入5个整数:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p + 1);
        for (int i = 0; i < 5; i++)
        {
            *(p + i) *= 2;
        }
        printf("元素乘以2以后的数组:\n");
        for (int i = 0;i < 5;i++){
            printf("%d",*( p + i));
        }
        printf("\n");
        return 0;
    }
}

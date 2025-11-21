//202510306202
//202510306202@cdu.edu.cn
//龚慧洁

#include <stdio.h>
void one(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int *p = arr;
        for (int j = 0; j < len - 1; j++)
        {
            if (*p > *(p + 1))
            {
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
            p++;
        }
    }
}
int main()
{
    int arr[10];
    int len = 10;
    printf("请输入10个整数:");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", arr + i);
    }
    one(arr, len);
    printf("排序结果:");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}

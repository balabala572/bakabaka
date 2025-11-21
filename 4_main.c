//202510306202
//202510306202@cdu.edu.en
//龚慧洁
#include <stdio.h>
void two(int *arr, int len)
{
    int *p = arr;
    for (int i = 0; i < len; i++)
    {
        (*p )++;
        p++;
    }
}
int main()
{
    int arr[5];
    int *p = arr;
    int len = 5;
    int i;
    printf("请输入5个整数:\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    two(arr, len);
    printf("每个元素自增1后的数组:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]));
    }
    printf("\n");
    return 0;
}


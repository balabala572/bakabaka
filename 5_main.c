//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
void two(int *ptr_arr, int len)
{
    for (int i = len - 1; i > 0; i--)
    {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0;
}
int main()
{
    int arr[5];
    int len = 5;
    printf("请输入5个整数:");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    two(arr, len);
    printf("移动后的数组:");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}

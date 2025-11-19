//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("请输入两个整数: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("交换后的结果：%d %d\n",x,y);
        return 0;
}

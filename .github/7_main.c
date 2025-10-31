//202510306202
//202410306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    for (i = 3; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = 0;
    for (i = 0; i < 5; i++)
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
}

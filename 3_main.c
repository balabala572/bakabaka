//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = 10;
    int temp;
    int flag;
    printf("请输入10个整数:\n");
        for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i- 1; j++)
        { if(arr[j]>arr[j+1]){
            temp =arr[j];
            arr[j]=arr[j+i];
            arr[j+i]=temp;
            flag = 1;
        }
        }
        if (flag==0) break;
    }
    for (int i = 0;i < n; i++){
        printf ("%d",arr[i]);
    }
    return 0;
}

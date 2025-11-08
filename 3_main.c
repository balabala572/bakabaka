//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[10];
    for(int i = 0;i < 10;i++){
        scanf("%d",&arr[i]);
        ｝
    int n = 10;
    int temp;
    int flag;
        int i, j;
  for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i- 1; j++)
        { 
            if (arr[j] > arr[j+1]){
            temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1] =temp;
            flag = 1;
        }
        }
        if (flag==0) break;
    }
        printf("%d",arr[0]);
    for (int i = 0;i < n; i++){
        printf (" %d",arr[i]);
    }
        printf("\n")
    return 0;
}

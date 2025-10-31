//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[5];
    int i,num;
    for(i=0;i<5;i++){
    scanf("%d",&num);
    while(num %2!=0);
    arr[i]=num;
    printf("偶数有：");
    for (i = 0; i < 5; i++)
    {
        if (i==0){
            printf("%d",arr[i]);
        }else
        {
            printf(" %d", arr[i]);
        }
    }
}
return 0;
}

//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int i = 1, n = 2, j = 3, k = 4, sum;
    int m;
    int arr[5];
    arr[0] = i;
    arr[1] = n;
    arr[2] = j;
    arr[3] = k;
    sum = i + n + k + j;
    arr[4] = sum;
    for (m = 0; m < 5; m++)
        {
            if(m==0){
        printf("%d", arr[m]);
            }else {
                printf(" %d",arr[m]);
            }
        return 0;
    }
}

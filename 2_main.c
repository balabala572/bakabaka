//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int arr[3][3];
    int trans[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    for(i=0;i<3;i++);{
            printf("%d %d %d\n", trans[i][0],trans[i][1],trans[i][2]);
}
        return 0;
}
int main()
{
    int arr[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%d,%d,%d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\n", arr[i][j]);
            }
        }
        return 0;
    }

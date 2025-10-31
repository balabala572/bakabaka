//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int n, i;
    int is_prime = 1;
    while (1)
    {
        scanf("%d,&n");
        if (n == 1)
        {
            is_prime = 0;
            break;
        }
        if (n == 2)
        {
            is_prime = 1;
            break;
        }
        else
        {
            i = 2;
            while (i < n)
            {
                if (n % i == 0)
                {
                    is_prime = 0;
                    break;
                    i++;
                }
            }
        }
        if (is_prime == 1)
        {
            printf("密钥安全，密码设置成功\n");
        }
        else if (is_prime == 0)
        {
            printf("密钥不安全，请重新输入\n");
        }
        return 0;
    }
}

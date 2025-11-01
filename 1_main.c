//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int n, i;
    int is_prime=1
printf("请输入小于50的正整数作为密钥");
    scanf("%d", &n);
    if(n<=0 ||n>=50) {
printf("输入不符合要求，请输入小于50的正整数\n");
    return 0;
    }
            for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
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

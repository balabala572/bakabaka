//202510306202
//202510306202@cdu.edu.en
//龚慧洁
#include <stdio.h>
int two(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += two(i, 2);
    }
    printf("1*1+2*2+3*3+4*4+5*5=%d\n", sum);
    return 0;
}


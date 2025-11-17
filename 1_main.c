//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;
    *p += 10;
    printf("%d\n", a);
    printf("%d\n", *p);
    return 0;
}


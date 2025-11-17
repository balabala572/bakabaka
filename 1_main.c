//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int a ;
    scanf("d%",&a);
    int *p = &a;
    *p += 10;
    printf("%d，%d\n", a，*p);
        return 0;
}

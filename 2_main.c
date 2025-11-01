//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int i, h, t, u;
    int is_first = 1;
    for (i = 100; i <= 999; i++)
    {
        h = i / 100;
        t = (i / 10) % 10;
        u = i % 10;
        if (h * h * h + t * t * t + u * u * u == i){
                        if (is_first) {
        printf("%d",i);
        is_first=0;
    }else
    {
        printf(" %d",i);
    }
    }
    }
    return 0;
}  
 

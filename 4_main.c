//202510306202
//202510306202@cdu.edu.en
//龚慧洁
#include <stdio.h>
int main()
{
    int i =100, h, t, u;
        int is_first=1;
    while (i <= 999)
    {
        h = i / 100;
        t = (i / 10) % 10;
        u = (i % 10);
        if (h * h * h + t * t * t + u * u * u == i)
        {
            if(is_first==1)
            {
            printf("%d", i);
            is_first=0;
            }
            else {
                printf(" %d",i);
            }
        }   
            i++;
    }       
            return 0;
}          


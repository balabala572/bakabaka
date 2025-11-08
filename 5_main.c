//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int calculatesum(int a1,int an,int step)
{
    if (step == 0) {
        if( a1 == an) {
            return a1;
        }
        else {
        return -1;
    }
}      
    if (((an-a1) * step < 0)||((an-a1)% step!=0))
    {
        return -1;
}
int n=(an - a1) / step + 1;
int sum = n* (a1+an) /2;
return sum;
}
int main() {
    int sum=calculatesum(1, 100, 1);
printf("从1加到100的和为:%d\n",sum);
return 0;
}

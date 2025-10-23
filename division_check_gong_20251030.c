//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main()
{
    int a, b; 
    scanf("%d %d", &a, &b);
    if(b!=0) {
    printf("num=a=%d num=b=%d num=a/b=%d b!=0%d\n", a, b, a / b, b != 0);}
    else{
        printf("num=a=%d num=b=%d 除数不能为0！ b!=0\n",a,b,b!=0);}
    return 0;
}

//202510306202
//202510306202@cdu.edu.cn
//龚慧洁

   #include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr = (int *)malloc(5 *sizeof(int));
    printf("请输入5个整数:");
    for (int i = 0;i < 5;i++){
        scanf("%d ",ptr + i);
    }
    printf("输出:");
    for(int i = 0;i < 5;i++){
        printf("%d ",*(ptr + i));
    }
    printf("\n");
    free(ptr);
    ptr =NULL;
    return 0;
} 

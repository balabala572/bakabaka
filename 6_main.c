//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int sum(int arr[],int len){
    int sum=0;
    for (int i=0;i<len;i++){
        sum += arr[i];
            }
            return sum;
            }
int pruduct(int arr[],int len){
    int product=1;
    for(int i = 0;i<len;i++) {
        product *=arr[i];
    }
    return product;
}
int main(){
    int arr[5];
    printf("请输入5个整数空格分离:");
    for(int i = 0;i < 5; i++){
    scanf("%d",&arr[i]);
    }
int sum_result=sum(arr, 5);
int product_result=product(arr, 5);
printf("%d\n",sum_result);
printf("%d\n", product_result);
return 0;
}

    

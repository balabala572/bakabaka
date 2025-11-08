//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
void one(int arr[],int length){
    int i=0;
    int j=length-1;
    while (i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
        j--;
        }
}
int main(){
    int arr[5];
    printf("请输入5个整数\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
one(arr,5);
for(int i=0;i<5;i++){
printf("%d ",arr[i]);
}
}  

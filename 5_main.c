//202510306202
//202510306202@cdu.edu.cn
//龚慧洁
#include <stdio.h>
int main(){
int arr[5];
int sum=0;
for(int i=0;i<4;i++){
    scanf("%d",&arr[i]);
        sum +=arr[i];
}
arr[4]=sum;
for(int i=0;i<5;i++){
    if(i=0){
            printf("%d", arr[i]);
    }
        else
        {
            printf(" %d", arr[i]);
        }
}
        return 0;
    }

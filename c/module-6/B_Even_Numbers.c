#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
    }else {
        // printf("%d\n"5,n);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
            // continue;
        }
    }
    return 0;
}
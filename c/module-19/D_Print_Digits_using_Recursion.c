#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void fun(int n){
    if(n==0)return;
    fun(n/10);
    printf("%d ",n%10);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        fun(n);
        if(n==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
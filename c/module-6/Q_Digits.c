#include<stdio.h>
int main(){
    int test,a;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        scanf("%d\n",&a);
        do{
            printf("%d ",a%10);
            a=a/10;
        }
        while(a!=0);
        printf("\n");
    }
    return 0;
}
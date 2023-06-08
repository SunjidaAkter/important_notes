#include<stdio.h>
int main(){
    int n,pos=0,neg=0,odd=0,even=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d ",&a);
        if(a%2==0){
            even++;
        }else if(a%2==1 || a%2==-1){
            odd++;
        }
        if(a>0){
            pos++;
        }else if(a<0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}
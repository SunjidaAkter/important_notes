#include<stdio.h>
int main(){
    int a,n,max=0;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&a);
        if(max<a){
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}
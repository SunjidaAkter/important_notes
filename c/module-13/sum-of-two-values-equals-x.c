#include<stdio.h>
#include<string.h>
int main(){
    int n,x,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
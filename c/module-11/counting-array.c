#include<stdio.h>
int main(){
    int n,count[13]={0};
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    for(int i=0;i<n;i++){
        printf("number of %d : %d\n",i,count[i]);
    }
    return 0;
}
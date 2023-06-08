#include<stdio.h>
int main(){
    int m,n;
    scanf("%d",&n);
    int a[n]; 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    } 
    int sum[m+n];
    for(int i=0;i<n;i++){
        sum[i]=a[i];
    } 
    int i=n;
    for(int j=0;j<m;j++){
        sum[i]=b[j];
        i++;
    } 
    for(int i=0;i<m+n;i++){
        printf("%d ",sum[i]);
    } 
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void fun(int a[],int n,int i,int* max){
    if(i==n)return;
    if(*max<a[i]){
        *max=a[i];
    }
    fun(a,n,i+1,max);
}
int main(){
    int n,max=INT_MIN;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,n,0,&max);
    printf("%d",max);
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// #include<stdlib.h>
// #include<limits.h>
// int fun(int a[],int n,int i,int max){
//     if(i==n)return max;
//     if(max<a[i]){
//         max=a[i];
//     }
//     fun(a,n,i+1,max);
// }
// int main(){
//     int n,max=INT_MIN;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("%d",fun(a,n,0,max));
//     return 0;
// }

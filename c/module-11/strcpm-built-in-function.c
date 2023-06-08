#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int v=strcmp(a,b);//ifa>b,then v=1,ifa<b,then v=-1,ifa=b,then v=0
    printf("%d",v);
    return 0;
}
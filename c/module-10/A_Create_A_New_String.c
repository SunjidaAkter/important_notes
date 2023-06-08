#include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];//1 for null string
    scanf("%s %s",&a,&b);
    int ca=strlen(a);
    int cb=strlen(b);
    printf("%d %d\n",ca,cb);
    printf("%s %s",a,b);
    return 0;
}
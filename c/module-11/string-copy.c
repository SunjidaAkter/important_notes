#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    for(int i=0;i<=strlen(a);i++){
        a[i]=b[i];
    }
    printf("%s\n",a);
    printf("%s",b);
    return 0;
}
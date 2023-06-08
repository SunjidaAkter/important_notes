#include<stdio.h>
int main(){
    char a[100];
    // gets(a);
    fgets(a,24,stdin);
    // a[13]='\0';
    printf("%s",a);
    return 0;
}
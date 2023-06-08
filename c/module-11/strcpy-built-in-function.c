#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    strcpy(a,b);//b er string a te copy hoe jabe
    printf("%s %s",a,b);
    return 0;
}
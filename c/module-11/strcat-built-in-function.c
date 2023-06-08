#include<stdio.h>
#include<string.h>
int main(){
    char a[202],b[101];
    scanf("%s %s",&a,&b);
    strcat(a,b);//b er string a er string er sathe aisa jog hoe a te store hobe
    printf("%s",a);
    return 0;
}
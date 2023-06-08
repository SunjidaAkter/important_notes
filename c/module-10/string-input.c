#include<stdio.h>
int main(){
    //runtime error: jokhon ami joto memory achhe tar cheye besi memory access korte chai
    char a[6];
    scanf("%s",&a);
    printf("%s",a);
    return 0;
}
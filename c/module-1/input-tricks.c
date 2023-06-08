#include<stdio.h>

int main(){
    int a, b;
    char c;
    // scanf("%d%c %d%c",&a,&c,&b,&c);//first method
    // printf("%d%c %d%c",a,c,b,c);
    // scanf("%d%% %d%%",&a,&b);//second method
    // printf("%d%% %d%%",a,b);
    scanf("%da %dc",&a,&c,&b,&c);//third method
    printf("%da %dc",a,c,b,c);
    return 0;
}
#include<stdio.h>
#include<string.h>
int sum(void){//parameter na dile void o dea jai
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}
int main(){
    int s=sum();
    printf("%d",s);
    return 0;
}
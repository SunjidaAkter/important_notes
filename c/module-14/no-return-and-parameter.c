#include<stdio.h>
#include<string.h>
void sum(int x,int y){
    int s=x+y;
    printf("%d",s);//function er modhhe return break er moto kaj kore
    //multiple return korle first return e kaj korbe just
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}
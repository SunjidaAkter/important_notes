#include<stdio.h>
#include<string.h>
int sum(int x,int y){//this is a user defined function but strlen() types functions are built in function
    int sum=x+y;
    return sum;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int s=sum(x,y);
    printf("%d",s);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int fun(char a[],int i){
    if(a[i]=='\0') return 0;
    int length=fun(a,i+1);
    return length+1;
}
int main(){
    char a[6]="hello";
    int length= fun(a,0);
    printf("%d",length);
    return 0;
}
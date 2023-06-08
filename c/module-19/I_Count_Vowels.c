#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int fun(char s[],int i){
    if(s[i]=='\0'){
        return 0;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        return 1+fun(s,i+1);
    }else{
        return fun(s,i+1);
    }
}
int main(){
    char s[201];
    fgets(s,201,stdin);
    printf("%d",fun(s,0));
    return 0;
}
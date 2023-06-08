#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(char* ar){
    *ar=ar[0]='g';
    *(ar+1)=ar[1]='a';
}
int main(){
    char ar[]="hello";
    fun(ar);
    printf("%s",ar);
    return 0;
}
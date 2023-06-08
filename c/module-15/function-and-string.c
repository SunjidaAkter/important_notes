#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(char ar[]){//array er khetre etar size n lage function e jeta string e lage na
    //string er jonno eta perfectly kaj kore na
    // int sz=sizeof(ar)/sizeof(char);
    // printf("%d\n",sz);
    printf("%d\n",strlen(ar));
}
int main(){
    char ar[6]="Hello";
    int sz=sizeof(ar)/sizeof(char);
    printf("%d\n",sz);
    fun(ar);
    return 0;
}
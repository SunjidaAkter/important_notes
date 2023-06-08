#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
//nijeke nije bar bar call korai hochhe recursion
void fun(int i){
    //tumi kokhon thambe se condition ta base case
    // base case
    if(i>5){
        return;
    }
    printf("%d\n",i);
    fun(i+1);
}
int main(){
    fun(1);
    return 0;
}
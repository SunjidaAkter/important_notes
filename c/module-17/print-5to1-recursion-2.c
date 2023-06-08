#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
//nijeke nije bar bar call korai hochhe recursion
void fun(int i){
    //tumi kokhon thambe se condition ta base case
    // base case
    if(i==6)return;
fun(i+1);//5 4 3 2 //recursion k asol kajer age call korle recursion reverse way te kaj kore
printf("%d\n",i);//jemon ekhane print holo main kaj
}
int main(){
    fun(1);
    return 0;
}
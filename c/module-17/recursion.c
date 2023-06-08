#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
//nijeke nije bar bar call korai hochhe recursion
void fun(){
    printf("fun\n");
    fun();
}
int main(){
    fun();
    return 0;
}
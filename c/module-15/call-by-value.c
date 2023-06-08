#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int x){
    printf("address of x in fun %p\n",&x);
    x=23;
    printf("value of x in fun %d\n",x);
}
int main(){
    int x=10;
    fun(x);
    printf("address of x in main %p\n",&x);
    printf("value of x in main %d\n",x);
    return 0;
}
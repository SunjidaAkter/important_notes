#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int* p){
    printf("address of x in fun %p\n",p);
    printf("value of x in main %d\n",*p);
    *p=23;
    printf("value of x in fun %d\n",*p);
}
int main(){
    int x=10;
    fun(&x);
    printf("address of x in main %p\n",&x);
    printf("value of x in main %d\n",x);
    return 0;
}
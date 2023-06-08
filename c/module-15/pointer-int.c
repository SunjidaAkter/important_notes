#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int x=100;
    int* ptr=&x;//ekhane int hoilo jar address rakhbo tar type ar asterisk holo pointer type mane ptr je akta address store korbo seta bujhai
    printf("address of x - %p\n",&x);
    printf("address of x - %p\n",ptr);

    printf("value of x - %d\n",x);
    printf("value of x - %d\n",*ptr);

    printf("address of ptr - %p\n",&ptr);
    printf("memory size of ptr - %d\n",sizeof(ptr));
    printf("memory size of x - %d\n",sizeof(x));
    
    //dereference
    *ptr=12;
    printf("value of x - %d\n",x);
    return 0;
}

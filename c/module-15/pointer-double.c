#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double x=5.45;
    double* ptr=&x;//ekhane int hoilo jar address rakhbo tar type ar asterisk holo pointer type mane ptr je akta address store korbo seta bujhai
    double* ptr2=ptr;//&x and ptr are same type lakhar somoi but emnite *ptr and x are same

    printf("address of x - %p\n",&x);
    printf("address of x - %p\n",ptr);
    printf("address of x - %p\n",ptr2);

    printf("value of x - %0.2lf\n",x);
    printf("value of x - %0.2lf\n",*ptr);
    printf("value of x - %0.2lf\n",*ptr2);

    printf("address of ptr - %p\n",&ptr);
    printf("memory size of ptr - %d\n",sizeof(ptr));
    printf("memory size of x - %d\n",sizeof(x));
    
    //dereference
    *ptr=12.34;
    printf("value of x - %d\n",x);
    return 0;
}
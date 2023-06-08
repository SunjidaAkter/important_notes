#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){//pointer mane bivinno dhoroner data type er variable er address rakhar variable
    int x=10;
    printf("%p\n",&x);
    int *p =&x;
    printf("%p\n",p);//x er address
    //dereference
    printf("%d\n",*p);//x er adderss er madhome x er value nilam.. eta k dereference bole
    //*p je kotha r x o same kotha;
    *p=500;
    printf("%d\n",x);
    return 0;
}
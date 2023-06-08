#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
//paser number onujai kaj korbe
void world(){
    printf("world start\n");//5
    printf("world end\n");//6
}
void hello(){
    printf("hello start\n");//3
    world();//4
    printf("hello end\n");//7
}
int main(){
    printf("main start\n");//1
    hello();//2
    printf("main end\n");//8
    return 0;
}
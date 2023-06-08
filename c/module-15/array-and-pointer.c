#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int ar[5]={10,20,30,40,50};//just ar likhle eta die ar er 0th index er pointer bujai
    printf("address of 0th index = %p\n",&ar[0]);
    printf("address of 0th index = %p\n",ar);
    printf("value of 0th index = %d\n",ar[0]);
    printf("value of 0th index = %d\n",0[ar]);
    printf("value of 0th index = %d\n",*ar);

    printf("address of 1th index = %p\n",&ar[1]);
    printf("address of 1th index = %p\n",(ar+1));
    printf("value of 1th index = %d\n",ar[1]);
    printf("value of 1th index = %d\n",1[ar]);
    printf("value of 1th index = %d\n",*(ar+1));

    printf("address of 2th index = %p\n",&ar[2]);
    printf("address of 2th index = %p\n",(ar+2));
    printf("value of 2th index = %d\n",ar[2]);
    printf("value of 2th index = %d\n",2[ar]);
    printf("value of 2th index = %d\n",*(ar+2));
    return 0;
}
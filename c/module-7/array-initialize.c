#include<stdio.h>
int main(){
    int arr1[5]={0};//{0,0,0,0,0}
    int arr2[5]={100};//{100,0,0,0,0}
    int arr3[5]={100,200,300,400,500};//{100,200,300,400,500}
    for (int i = 0; i < 5; i++)
    {
        printf("arr1[%d] = %d\n",i,arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("arr2[%d] = %d\n",i,arr2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("arr3[%d] = %d\n",i,arr3[i]);
    }
    return 0;
}
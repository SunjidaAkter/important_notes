#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int* ar, int n){//array er khetre etar size n lage function e jeta string e lage na
    int sz=sizeof(ar)/sizeof(int);
    printf("%d\n",sz);
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    int ar[5]={10,20,30,40,50};
    int sz=sizeof(ar)/sizeof(int);
    printf("%d\n",sz);
    fun(ar,5);
    return 0;
}
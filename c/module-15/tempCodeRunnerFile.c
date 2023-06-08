#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int* ar, int n){
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
}
int main(){
    int ar[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    fun(ar,5);
    return 0;
}
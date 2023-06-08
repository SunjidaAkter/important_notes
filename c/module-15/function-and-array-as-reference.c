#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void fun(int* ar, int n){//array pathano manei reference pathano
    *ar=ar[0]=100;
    *(ar+1)=ar[1]=200;
    *(ar+2)=ar[2]=300;
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int ar[5]={10,20,30,40,50};
    fun(ar,5);//etar jonno 0th index er man change hoise
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
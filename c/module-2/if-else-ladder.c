#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    //this system is called if else ladder
    if(tk>=100){
        printf("burger khabo");
    }else if(tk>=50){
        printf("fuchka khabo");
    }else{
        printf("kicchu khabo na");
    }
    return 0;
}
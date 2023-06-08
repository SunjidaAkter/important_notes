#include<stdio.h>
int main(){
    // char a[6]={'M','o','n','i','k','a'};//not recommended
    char a[6]="Monika";
    for(int i=0;i<6;i++){
        printf("%c",a[i]);
    }
    return 0;
}
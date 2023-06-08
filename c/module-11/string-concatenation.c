#include<stdio.h>
#include<string.h>
int main(){
    char a[202],b[101];
    scanf("%s %s",&a,&b);
    int j=strlen(a);
    for(int i=0;i<=strlen(b);i++){
        a[j]=b[i];
        j++;
    }

    /* important case */

    // input : apple orangeXX
    // output : appleorange
    
    // for(int i=0;i<6;i++){
    //     a[j]=b[i];
    //     j++;
    // }
    // a[j]='\0';
    printf("%s",a);
    return 0;
}
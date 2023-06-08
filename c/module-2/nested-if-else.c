#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    //this system is called if else ladder
    if(tk>=5000){
        printf("cox bazar jabo\n");
        if(tk>=10000){
            printf("saint martin jabo");
        }else{
            printf("ferot asbo");
        }
    }else{
        printf("kothao jabo na");
        
    }
    return 0;
}
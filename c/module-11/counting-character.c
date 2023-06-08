#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    int count[26]={0};
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        count[str[i]-97]++;
    }


    /*****present alphabetical situation wise sorted, like for "programming" string p->r->o->g->r->a->m->m->i->n->g ************/
    // for(int i=0;i<strlen(str);i++){
    //     if(count[str[i]]!=0){
    //         printf("number of %c : %d\n",str[i],count[str[i]-97]);
    //     }        
    // }


    /*****present alphabetical situation wise sorted and if i wanted to skip the same character , like for "programming" string p->r->o->g->a->m->i->n*****/
    for(int i=0;i<strlen(str);i++){
        if(count[str[i]-97]!=0){
            printf("number of %c : %d\n",str[i],count[str[i]-97]);
        }    
        count[str[i]-97]=0;    
    }


    /*****alphabetical serial wise sorted, like a->b->c->d...etc*****/
    // for(int i=0;i<26;i++){
    //     if(count[i]!=0){
    //         printf("number of %c : %d\n",i+'a',count[i]);
    //     }
    // }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int total=row*col;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }
    if(cnt==total){
        printf("zero matrix");
    }else{
        printf("not zero matrix");
    }
    return 0;
}
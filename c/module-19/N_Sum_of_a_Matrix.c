#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
void fun(int m,int n,int i,int j,int a[m][n],int b[m][n],int c[m][n]){
    if(i==m && j==n) return;
    c[i][j]=a[i][j]+b[i][j];
    if(j==n-1){
        fun(m,n,i+1,j,a,b,c); 
    }else{
        fun(m,n,i,j+1,a,b,c); 
    }
}
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    fun(row,col,0,0,a,b,c);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
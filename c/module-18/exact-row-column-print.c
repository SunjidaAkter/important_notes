#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int row, col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //exact row
    int e_row;
    scanf("%d",&e_row);
    printf("getting exact %dth row's elements :\n",e_row);
    for(int i=0;i<col;i++){
        printf("%d ",a[e_row][i]);
    }
    int e_col;
    scanf("%d",&e_col);
    printf("\ngetting exact %dth column's elements :\n",e_col);
    for(int i=0;i<row;i++){
        printf("%d\n",a[i][e_col]);
    }
    return 0;
}
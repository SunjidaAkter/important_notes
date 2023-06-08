#include<stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int arr[n],j=n-1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
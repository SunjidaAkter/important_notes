#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r){
    int leftSize=m-l+1;
    int rightSize=r-m;
    int L[leftSize],R[rightSize];
    int k=0;
    for(int i=l;i<=m;i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++){
        R[k]=a[i];
        k++;
    }
    int i=0,j=0,curr=l;
    while(i<leftSize&& j<rightSize){
        if(L[i]<=R[j]){
            a[curr]=L[i];
            i++;
        }else{
            a[curr]=R[j];
            j++;
        }
        curr++;
    }
    while(i<leftSize){
        a[curr]=L[i];
        i++;
        curr++;
    }
    while(i<leftSize){
        a[curr]=R[i];
        i++;
        curr++;
    }
}

void merge_sort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
        cout<<"This"<<endl;
        for(int i=l;i<=mid;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=mid+1;i<=r;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
//output without merge
/*
This
15 
4 
This
15 4 
3 
This
9 
2 
This
9 2 
8 
This
15 4 3 
9 2 8 
15 4 3 9 2 8 
*/
//output after merge
/*
This
4 
15 
This
3 4 
15 
This
2 
9 
This
2 8 
9 
This
2 3 4 
8 9 15 
2 3 4 8 9 15 
*/
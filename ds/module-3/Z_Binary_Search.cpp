#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        int x;cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==x){
                flag=true;
                break;
            } else if(a[m]<x){
               l=m+1; 
            }else{
                r=m-1;
            }
        }
        if(flag==true)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q;cin>>n>>q;
    vector<long long int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];//* 1 2 3 4 5
    }
    long long int pre[n];
    pre[0]=v[0];//*1
    for(int i=1;i<v.size();i++){
        pre[i]=v[i]+pre[i-1];//* 1 3 6 10 15 
    }
    while(q--){
        long long int l,r;cin>>l>>r;
        l--;r--;
        long long int sum=0;
        if(l==0)sum=pre[r];
        else sum=pre[r]-pre[l];
        cout<<sum<<endl;
    }
    return 0;
}
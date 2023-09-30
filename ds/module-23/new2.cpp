#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;cin>>k;
    int mn=INT_MAX;
    int i=0,j=0;
    queue<int>q;
    while(j<n){
        if(a[j]<0)q.push(a[j]);
        if(j>=k-1){
            int x;
            if(q.size()){
                x=q.front();
                mn=min(mn,x);
            }else{
                // cout<<0<<" ";
                mn=min(mn,0);
            }
            if(a[i]<0)q.pop();
            i++;
        }
        j++;
    }
    cout<<mn;
    return 0;
}
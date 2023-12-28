#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll prefix_sum[n]={0};
    prefix_sum[0]=a[0];
    for(ll i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
    for(ll i=0;i<n;i++)cout<<prefix_sum[i]<<" ";
    return 0;
}
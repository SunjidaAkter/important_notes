#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll prefix_max[n]={0};
    ll mx=a[0];
    prefix_max[0]=a[0];
    for(ll i=1;i<n;i++){
        mx=max(mx,a[i]);
        prefix_max[i]=mx;
    }
    for(ll i=0;i<n;i++)cout<<prefix_max[i]<<" ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n-1],ans=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(ll i=1;i<=n;i++){
        if(a[i-1]!=i){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
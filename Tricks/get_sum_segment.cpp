#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
vector<ll>p(2*10e5+5);
ll getSum(ll l,ll r){
    if(l>r)return 0;
    return p[r]-((l-1>=0?p[l-1]:0));
}
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    // sort(a,a+n);
    p[0]=a[0];
    for(ll i=1;i<n;i++)p[i]=p[i-1]+a[i];
    cout<<getSum(3,4);
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
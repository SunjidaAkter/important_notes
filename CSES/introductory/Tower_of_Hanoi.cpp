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
ll cnt=0;
void toh(ll n,ll s,ll d,ll a){
    if(n==0)return;
    toh(n-1,s,a,d);
    cout<<s<<" "<<d<<nl;
    toh(n-1,a,d,s);
}
void toh1(ll n,ll s,ll d,ll a){
    if(n==0)return;
    toh1(n-1,s,a,d);
    // cout<<s<<" "<<d<<nl;
    cnt++;
    toh1(n-1,a,d,s);
}
void solve(){
    ll n;cin>>n;
    toh1(n,1,3,2);
    cout<<cnt<<nl;
    toh(n,1,3,2);
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
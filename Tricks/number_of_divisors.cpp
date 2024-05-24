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
const ll N=2000000;
ll cnt[N];
void solve(){
    for(ll i=0;i<=N;i++)cnt[i]=0;
    for (ll i=1;i<=100;i++)
        for (ll j=i;j<=100;j+=i)
            cnt[j]++;
    for(ll i=1;i<=100;i++){
        cout<<"Number of divisors of "<<i<<" is "<<cnt[i]<<nl;
    }        
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
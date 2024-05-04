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
void solve(){
    ll n;cin>>n;
    ll a[n],tum=0,sum=0,mn=LONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(ll mask=0;mask<(1<<n);mask++){
        tum=0;
        for(ll i=0;i<n;i++){
            if(mask&(1<<i))tum+=a[i];
        }
        mn=min(mn,abs(sum-2*tum));
    }
    cout<<mn; 
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
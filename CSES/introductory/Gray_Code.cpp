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
vector<string> gray(ll n){
    vector<string>ans;
    if(n==1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string>lst=gray(n-1);
    for(ll i=0;i<lst.size();i++){
        ans.push_back("0"+lst[i]);
    }
    for(ll i=lst.size()-1;i>=0;i--){
        ans.push_back("1"+lst[i]);
    }
    return ans;
}
void solve(){
    ll n;cin>>n;
    vector<string>str=gray(n);
    for(string val:str)cout<<val<<nl;
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
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

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ordered_set1<ll>st1;
    ordered_set2<ll>st2;
    for(ll i=0;i<n;i++){
        st1.insert(a[i]);
        st2.insert(a[i]);
    }
    while(!st1.empty()){
        cout<<*st1.begin()<<" ";
        st1.erase(st1.begin());
    }
    cout<<nl;
    while(!st2.empty()){
        cout<<*st2.begin()<<" ";
        st2.erase(st2.begin());
    }
    cout<<nl;
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
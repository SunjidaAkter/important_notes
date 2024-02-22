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
bool issubsequence(string& s, string& t){
    queue<char> q;
    ll cnt = 0;
    // push the string t in queue;
    for (ll i = 0; i < t.size(); i++) {
        q.push(t[i]);
    }
    ll i = 0;
    // traverse throgh the entire queue
    while (!q.empty()) {
        // check if the ith element in s is equal to front
        // element
        if (s[i] == q.front()) {
            cnt++;
            i++;
        }
        // pop element of queue after each iteration
        q.pop();
    }
    // check for the cnt length
    if (cnt == s.size())
        return true;
    else
        return false;
}
void solve(){
    string a="hello world!!!";   
    string b="world";
    if(issubsequence(b,a))yes;
    else no;   
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
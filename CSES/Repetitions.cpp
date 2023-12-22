#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    ll cnt=1,mx=0;
    for(ll i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            cnt++;
        }else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    if(mx==0)cout<<cnt;
    else cout<<mx;
    return 0;
}
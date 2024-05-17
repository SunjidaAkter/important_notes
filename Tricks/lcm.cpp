#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
ll lcm(ll a,ll b){
    ll GCD=__gcd(a,b);
    ll LCM=(a/GCD)*b;
    return LCM;
}
int main(){
    ll n=1;
    ll a[5]={2,2,6,4,3};
    for(ll i=0;i<5;i++){
        n=lcm(n,a[i]);
    }
    cout<<n;
    return 0;
}
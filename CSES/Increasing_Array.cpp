#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=1;i<n;i++){
        if(a[i-1]>a[i]){
            sum+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<sum;
    return 0;
}
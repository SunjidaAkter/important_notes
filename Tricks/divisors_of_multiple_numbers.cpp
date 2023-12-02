#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
const int N=1e5+5;
vector<int>divisors[N+1];
int main(){
    int n=N;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisors[j].push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        for(int val:divisors[i]){
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
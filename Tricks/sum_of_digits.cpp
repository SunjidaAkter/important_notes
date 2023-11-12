#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
ll func(int x) {
 
    ll sum = 0;
    while(x) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}
int main(){
    cout<<func(2349);
    return 0;
}
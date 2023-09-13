#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    string a,b;cin>>a>>b;
    int i=0;
    for(char c:b){
        if(a[i]==c)i++;
    }
    if(i==a.size())cout<<"YES";
    else cout<<"NO";
    return 0;
}
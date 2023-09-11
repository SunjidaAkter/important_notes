#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int lcs(string a,int n,string b,int m){
    if(n==0||m==0)return 0;
    if(a[n-1]==b[m-1]){
        int ans=lcs(a,n-1,b,m-1);
        return ans+1;    
    }else{
        int choice1=lcs(a,n-1,b,m);
        int choice2=lcs(a,n,b,m-1);
        return max(choice1,choice2);
    }    
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<lcs(a,a.size(),b,b.size());
    return 0;
}
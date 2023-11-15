#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool isPalindrome(ll n) { 
    string str = to_string(n); 
    int len = str.length(); 
    for(ll i = 0; i < len/2; i++) { 
        if(str[i] != str[len-1-i]) 
            return false; 
    } 
    return true; 
} 
vector<ll>palindrome;  
void generatePalindromes(ll n) { 
    for(ll i = 1; i < n; i++) { 
        if(isPalindrome(i)) 
            palindrome.push_back(i); 
    } 
} 
int main(){
    ll n=10e10;
    generatePalindromes(n);
    cout<<palindrome.size()<<" ";
    for(auto val:palindrome)cout<<val<<" ";
    return 0;
}
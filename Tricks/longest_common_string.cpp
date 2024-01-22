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
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         
    int endingIndex = m;    
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (X[i - 1] == Y[j - 1]){
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen){
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return X.substr(endingIndex - maxlen, maxlen);
}
// string LCS(string X, string Y, int m, int n)
// {
//     int maxlen = 0;         // stores the max length of LCS
//     int endingIndex = m;    // stores the ending index of LCS in `X`
 
//     // `lookup[i][j]` stores the length of LCS of substring
//     // `X[0…i-1]`, `Y[0…j-1]`
//     int lookup[m + 1][n + 1];
 
//     // initialize all cells of the lookup table to 0
//     memset(lookup, 0, sizeof(lookup));
 
//     // fill the lookup table in a bottom-up manner
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             // if the current character of `X` and `Y` matches
//             if (X[i - 1] == Y[j - 1])
//             {
//                 lookup[i][j] = lookup[i - 1][j - 1] + 1;
 
//                 // update the maximum length and ending index
//                 if (lookup[i][j] > maxlen)
//                 {
//                     maxlen = lookup[i][j];
//                     endingIndex = i;
//                 }
//             }
//         }
//     }
 
//     // return longest common substring having length `maxlen`
//     return X.substr(endingIndex - maxlen, maxlen);
// }
void solve(){
    string s1="todaycodechef";
    string s2="yesterdaycodeforces";
    // ll m=s1.size(),n=s2.size();
    string ans=LCS(s1,s2,s1.size(),s2.size());
    cout<<ans<<nl;
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
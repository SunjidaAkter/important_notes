#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int f[26]={0};//eta kom value er jonno kora jai like ekhane 26 ta ase tai kora gache... er besi hole onno algo
    for(int i=0;i<n;i++){
        char a;cin>>a;
        f[a-'a']++;
    }
    for(char i='a';i<='z';i++){
        if(f[i-'a']>0){
            for(int j=0;j<f[i-'a'];j++){
                cout<<i;
            }
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            s+=a[i];
        }
    }
    cout<<s;
    return 0;
}
//normally akta ba duita n times one dimensional loop thakle oi programme er time complexity hobe O(n) [big o of n][big o notation]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
        while(x>0){
            int digit=x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}
//n times loop er vitor logN times loop cholse tai etar time complexity O(N*logN)
// time 2sec thakle n=10^6 dea jabe
// time 1sec thakle n=10^5 dea jabe
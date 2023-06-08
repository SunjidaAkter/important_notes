#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i*2){
        cout<<i<<endl;
    }
    // while(n>0){
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }
    return 0;
}
    //loop er increment r decrement jodi vag ba gun akare hoi tahole setar time complexity O(logN)
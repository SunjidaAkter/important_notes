#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello";
    s="gello";
    s.assign("hello");
    s.erase(3,1);
    s.replace(3,0,"l");
    s.insert(5,"_world");
    cout<<s<<endl;
    return 0;
}
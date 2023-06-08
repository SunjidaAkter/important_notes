#include<bits/stdc++.h>
using namespace std;
namespace Rakib{
    int age=28;
    void hello(){
        cout<<"Rakib namespace"<<endl;
    }
}
namespace Sakib{
    int age2=24;
    void hello(){
        cout<<"Sakib namespace"<<endl;
    }
}
// using namespace Sakib;
using namespace Rakib;
int main(){
    // cout<<age; 
    Sakib::hello(); 
    hello(); 
    return 0;
}
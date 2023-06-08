#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;//0
    v.push_back(10);
    cout<<v.capacity()<<endl;//1
    v.push_back(10);
    cout<<v.capacity()<<endl;//2
    v.push_back(10);
    cout<<v.capacity()<<endl;//4//capacity er baire chole gele again push back korle capacity double hoe jai
    v.push_back(10);
    cout<<v.capacity()<<endl;//4
    v.push_back(10);
    cout<<v.capacity()<<endl;//8
    return 0;
}
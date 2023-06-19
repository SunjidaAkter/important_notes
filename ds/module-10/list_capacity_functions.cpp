#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30};
    cout<<myList.max_size()<<endl;
    //array er moto er alada kono capacity nai
    cout<<myList.size()<<endl;
    myList.clear();
    cout<<myList.size()<<endl;
    myList.resize(2);
    cout<<myList.size()<<endl;
    for(int val:myList){
        cout<<val<<' ';
    }
    cout<<endl;
    return 0;
}
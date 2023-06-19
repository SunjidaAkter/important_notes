#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={2,2,5,1,4,3,5};
    myList.remove(5);
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.sort();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.sort(greater<int>());
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.unique();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.reverse();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
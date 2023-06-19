#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList(10,5);
    cout<<myList.size()<<endl;
    cout<<myList.front()<<endl;
    for(auto it=myList.begin();it!=myList.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    list<int>list2={1,2,3,4,5};
    list<int>myList1(list2);
    for(auto it=myList1.begin();it!=myList1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    int a[5]={10,20,30,40,50};
    list<int>myList2(a,a+5);
    for(auto it=myList2.begin();it!=myList2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<int>v={100,200,300,400,500};
    list<int>myList3(v.begin(),v.end());
    for(int val:myList3){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
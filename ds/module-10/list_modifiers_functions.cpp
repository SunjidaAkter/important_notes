#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30};
    list<int>newList;
    newList=myList;
    for(int val:newList){
        cout<<val<<" ";
    }
    cout<<endl;
    list<int>newList1;
    newList1.assign(myList.begin(),myList.end());
    for(int val:newList1){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.push_front(100);
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.pop_front();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.push_back(100);
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.pop_back();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.insert(next(myList.begin(),2),100);
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.insert(next(myList.begin(),6),100);//cycle er modhhe kaj kore
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.erase(next(myList.begin(),1));
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.insert(next(myList.begin(),1),newList.begin(),newList.end());
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    vector<int>v={100,200,300};
    myList.insert(next(myList.begin(),1),v.begin(),v.end());
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.erase(next(myList.begin(),1),next(myList.begin(),7));
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    myList.erase(next(myList.begin(),2));
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    replace(myList.begin(),myList.end(),30,100);
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    auto it=find(myList.begin(),myList.end(),20);
    if(it==myList.end()){
        cout<<"Not found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,20,30,40,50};
    cout<<v.size()<<endl;//5
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.clear();//eta just size k zero kore dei but elements asole delete kore na
    cout<<endl<<v.size()<<endl;//0
    cout<<v[0]<<endl;//10
    cout<<v[1]<<endl;//20
    v.resize(2);//size clear korle elements delete hoi na but size 0 hoi.... ei kom size er array resize kore barale array er elements sob zero hoe jai
    cout<<v[0]<<endl;//0
    cout<<v[1]<<endl;//0
    v.resize(3,10); //0 0 10
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    mp.insert({"sakib",75});//*O(logN)
    mp.insert({"tamim",19});
    mp.insert({"samim",75});
    mp["sakib"]=12;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;//*O(logN)
    }
    cout<<mp.count("sakib")<<endl;
    cout<<mp["sakib"]<<endl;
    if(mp.count("akib"))cout<<"present"<<endl;
    else cout<<"not present"<<endl;
    return 0;
}
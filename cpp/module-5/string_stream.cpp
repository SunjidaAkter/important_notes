#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    stringstream ss(s);
    //evabeo kora jai
    // stringstream ss;
    // ss<<s;
    string word;
    int count=0;
    while(ss >> word){
        cout<<word<<endl;
        count++;
    }
    cout<<count;
    return 0;
}
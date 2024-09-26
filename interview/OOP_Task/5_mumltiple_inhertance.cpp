#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void personalInfo() const {
        cout << name << " - " << age << endl;
    }
};

class Company {
protected:
    string cname;
    string cloc;

public:
    Company(string cn, string loc) : cname(cn), cloc(loc) {}

    void companyInfo() const {
        cout << cname << " - " << cloc << endl;
    }
};

class Employee : public Person, public Company {
public:
    Employee(string n, int a, string cn, string loc)
        : Person(n, a), Company(cn, loc) {}

};

void solve(){
    Employee obj("Sayed", 24, "Google", "USA");

    
    obj.companyInfo();
    obj.personalInfo();
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
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

class Animal {
protected:
    string name;

public:
    Animal(string n) : name(n) {}
    void sound(){
        cout << "This is an animal sound" << endl;
    }
};


class Mammal : public Animal {
protected:
    string type_of_mammal;

public:
    Mammal(string n, string type) : Animal(n), type_of_mammal(type) {}

    void mammalInfo() {
        cout << name << " is a " << type_of_mammal << endl;
    }
};

class Dog : public Mammal {
private:
    string breed;

public:
    Dog(string n, string type, string b) 
        : Mammal(n, type), breed(b) {}

    void dogInfo() {
        cout << name << " is a " << breed << " breed" << endl;
    }
};

void solve(){
 Dog dog("Buddy", "Domestic mammal", "Golden Retriever");

    
    dog.sound();         
    dog.mammalInfo();    
    dog.dogInfo();     
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
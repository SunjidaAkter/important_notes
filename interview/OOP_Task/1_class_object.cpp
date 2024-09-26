#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)

class A{
    public:
    ll value =5;
    A(){
        cout<<"I am Constructor"<<endl;
    }

    void display(){
        cout<<"I am Method"<<endl;
    }

    ~A(){
        cout<<"I am Destructor"<<endl;
    }

    friend ostream& operator<<(ostream& os, const A& obj) {
        os << "I am Class A";
        return os;
    }
        
};

int main(){
    A obj;
    A obj1;
    obj.display();
    obj.value =5;
    cout<<obj.value<<endl;
    cout<<A.value<<endl;
    cout<<obj<<endl;
    return 0;
}
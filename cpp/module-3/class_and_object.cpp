#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[101];
        int roll;
        int cls;
        char section;
};
int main(){
    Student s;
    s.roll=29;
    s.cls=2;
    s.section='A';
    char nm[101]="sun";
    strcpy(s.name,nm);
    cout<<s.name<<endl;
    Student karim;
    karim.roll=29;
    karim.cls=2;
    karim.section='A';
    char nm2[101]="mun";
    strcpy(karim.name,nm2);
    cout<<karim.name<<endl;
    return 0;
}
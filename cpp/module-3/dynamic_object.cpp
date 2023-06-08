#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        char section;
        int cls;
        char name[101];

        Student(int r,int s,int c,char*n){
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main(){
    char name[101]="sun";
    Student* rahim=new Student(12,'A',6,name);
    cout<<rahim->name<<endl;
    delete rahim;
    cout<<rahim->name<<endl;
    return 0;
}
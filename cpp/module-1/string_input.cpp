#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[101];
    cin.getline(s,101);
    // c te fgets use korle kintu enter ta o strlen er modhe nie nito, but getline er khetre erokom ta hoi na
    cout<<strlen(s);
    return 0;
}
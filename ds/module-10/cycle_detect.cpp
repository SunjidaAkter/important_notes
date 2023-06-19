#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        // Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            // this->prev=NULL;
        }
};
// void print_normal(Node* head){
//     Node* tmp=head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
// void print_reverse(Node* tail){
//     Node* tmp=tail;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->prev;
//     }
//     cout<<endl;
// }
// void reverse_two_pointers(Node* head,Node* tail){
//     Node* i=head;
//     Node* j=tail;
//     while(i!=j&&i->next!=j){
//         swap(i->val,j->val);
//         i=i->next;
//         j=j->prev;
//     }
// }

int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=a;false;
    Node* slow=head;
    Node* fast=head;
    bool flag=false;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag=true;
            break;
        }
    }
if(flag){
    cout<<"cycle detected"<<endl;
}else{
    cout<<"no cycle"<<endl;
};
return 0;
}
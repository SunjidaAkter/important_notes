#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head =newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void recursively_linked_list(Node* head){
    Node* tmp=head;
    if(tmp==NULL)return;
    recursively_linked_list(tmp->next);
    cout<<tmp->val<<" ";   
}
void print_linked_list(Node* &head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void reverse(Node* &head,Node* current){
    if(current->next==NULL){
        head=current;
        return;
    }
    reverse(head,current->next);
    current->next->next=current;
    current->next==NULL;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;   // c->next=d;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,tail,v);
    }
    reverse(head,head);
    print_linked_list(head);   
    return 0;
}
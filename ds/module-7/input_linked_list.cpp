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
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_at_head(Node* &head,int v){
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
void insert_at_position(Node* head,int pos,int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void insert_at_tail(Node* &head,Node* &tail, int v){
    Node* newNode=new Node(v);
    if(head ==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
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
    print_linked_list(head);
    int pos,val;cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid"<<endl;
    }else if(pos==0){
        insert_at_head(head,val);
    }else if(pos==size(head)){
        insert_at_tail(head,tail,val); 
    }else{
        insert_at_position(head,pos,val);
    }
    print_linked_list(head);
    return 0;
}
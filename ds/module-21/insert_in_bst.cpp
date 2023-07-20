#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }    
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node* >q;
    if(root)q.push(root);
    while(!q.empty()){
        //* 1. ber kore ano
        Node* p=q.front();
        q.pop();
        //* 2. jabotio ja kaj achhe
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)myLeft=NULL;
        else myLeft=new Node(l);
        if(r==-1)myRight=NULL;
        else myRight=new Node(r);
        p->left=myLeft;
        p->right=myRight;
        //* 3. child push kora
        if(p->left)q.push(p->left); 
        if(p->right)q.push(p->right); 
    }
    return root;
}
void level_order_taversal(Node* root){
    if(root==NULL){
        cout<<"no tree!";
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        //* 1. ber kore ana 
        Node* f=q.front();
        q.pop();
        //* 2. ja kaj achhe
        cout<<f->val<<" ";
        //* 3. tar child rakha
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}
void insert(Node* &root ,int x){
    if(root==NULL){
        root=new Node(x);
        return;
    }
    if(x<root->val){
        if(root->left==NULL){
            root->left=new Node(x);
        }else{
            insert(root->left,x);
        }
    }else{
        if(root->right==NULL){
            root->right=new Node(x);
        }else{
            insert(root->left,x);
        }
    }
}
int main(){
    Node* root=input_tree();
    int x;cin>>x;
    insert(root,x);
    level_order_taversal(root);
    return 0;
}
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int>v;
void levelOrder(TreeNode<int> *root){
    if(root==NULL)return;
    bool freq[3005]={false};
    queue<pair<TreeNode<int>*,int>>q;
    if(root)q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int>parent=q.front();
        TreeNode<int>* node=parent.first;
        int level=parent.second;
        q.pop();
        if(!freq[level]){
            v.push_back(node->data);
            freq[level]=true;
        }
        if(node->left)q.push({node->left,level+1});
        if(node->right)q.push({node->right,level+1});
    }
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    v.clear();
    levelOrder(root);
    return v;
}
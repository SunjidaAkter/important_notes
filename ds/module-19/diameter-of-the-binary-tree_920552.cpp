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
int mxD=0;
int max_diameter(TreeNode<int> *root){
    if(root==NULL)return 0;
    int l=max_diameter(root->left);
    int r=max_diameter(root->right);
    int d=l+r;
    mxD=max(mxD,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    mxD=0;
    max_diameter(root);
    return mxD;
}

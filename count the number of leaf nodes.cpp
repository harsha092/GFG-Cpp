void preorder(Node* root, int &count){
    if(root==NULL) return;
    preorder(root->left,count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    preorder(root->right,count);
}
int countLeaves(Node* root)
{
    int ct=0;
    preorder(root,ct);
    return ct;
}

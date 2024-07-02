/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void traverseleft(Node *root,vector<int> &ans){
        if(root==NULL || root->left==NULL && root->right==NULL) return;
        ans.push_back(root->data);
        if(root->left)
        traverseleft(root->left,ans);
        else{
        traverseleft(root->right,ans);}
    }
    void rootnode(Node *root,vector<int> &ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);}
        rootnode(root->left,ans);
        rootnode(root->right,ans);
    }
    void traverseright(Node *root,vector<int> &ans){
        if(root==NULL || root->left==NULL && root->right==NULL) return;
        
        if(root->right) traverseright(root->right,ans);
        else{
            traverseright(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL){ return ans;}
        ans.push_back(root->data);
        
        traverseleft(root->left,ans);
        
        rootnode(root->left,ans);
        rootnode(root->right,ans);
        
        traverseright(root->right,ans);
        
        return ans;
    }
};

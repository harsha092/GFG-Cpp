class Solution{
    public:
    int height(struct Node* root){
        // code here 
        if(root==NULL)
            return 0;
        int left = height(root->left);
        int right = height(root->right);
        int ans = 1 + max(left, right);
        return ans;}
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL) {return true;}
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        if(left && right && diff) {return 1;}
        else{
            return false;
        }
    }
};

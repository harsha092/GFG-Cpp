class Solution {
  public:
  int height(Node* root){
            if(root==NULL) return 0;
            int left=height(root->left);
            int right=height(root->right);
            int ans=max(left,right)+1;
            return ans;
        }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL) return 0;
        int left=diameter(root->left);
        int right=diameter(root->right);
        int comb=height(root->left)+height(root->right)+1;
        return max(left,max(right,comb));
    }
};

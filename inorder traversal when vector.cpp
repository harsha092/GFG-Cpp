class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> ans;
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root==NULL) return ans;
        else
        {
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
        }
    return ans;
    }
};

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
    pair<int,int>df(Node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
     return p;}
        pair<int,int> left=df(root->left);
        pair<int,int> right=df(root->right);
        int a=left.first;
        int b=right.first;
        int c=left.second+right.second+1;
        pair<int,int> ans;
        ans.first= max(a,max(b,c));
        ans.second=max(left.second,right.second)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        return df(root).first;
        
    }
};

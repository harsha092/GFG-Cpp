class Solution
{
    public:
    int sum(Node* root){
         if(root==NULL) return 0;
         return root->data + sum(root->left) + sum(root->right);
         }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL) return true;
         if(root==NULL || (root->left==NULL && root->right==NULL)) return true;
         int lefts=sum(root->left);
         int rights=sum(root->right);
         if(root->data==lefts+rights) {
              if (isSumTree(root->left) && isSumTree(root->right)){
                  return true;
              }
         }
         return false;
         
    }
};

void solve(Node* root, int flag, int& sum){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL && flag == 1){
        sum += root->data;
    }
    solve(root->left, 1, sum);
    solve(root->right, 0, sum);
}
int leftLeavesSum(Node *root)
{
    int sum = 0;
    int flag = 0;
    solve(root, flag, sum);
    return sum;
}

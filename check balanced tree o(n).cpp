class Solution {
public:
    // Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBf(Node *root) {
        // Base case: An empty tree is balanced and has height 0.
        if (root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        // Recursive calls to check if left and right subtrees are balanced.
        pair<bool, int> left = isBf(root->left);
        pair<bool, int> right = isBf(root->right);
        
        bool lans = left.first;
        bool rans = right.first;
        
        // Check if the height difference between left and right subtrees is at most 1.
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        // A tree is balanced if both subtrees are balanced and the height difference is at most 1.
        if (lans && rans && diff) {
            ans.first = true;
        } else {
            ans.first = false;
        }
        
        return ans;
    }

    bool isBalanced(Node *root) {
        return isBf(root).first;
    }
};

class Solution {
public:
    unordered_map<int, vector<TreeNode*>> memo;
    
    vector<TreeNode*> allPossibleFBT(int n) {
        if (memo.find(n) == memo.end()) {
            vector<TreeNode*> list;
            if (n == 1) {
                list.push_back(new TreeNode(0));
            } else if (n % 2 == 1) {
                for (int x = 0; x < n; ++x) {
                    int y = n - 1 - x;
                    for (TreeNode* left: allPossibleFBT(x)) {
                        for (TreeNode* right: allPossibleFBT(y)) {
                            TreeNode* root = new TreeNode(0);
                            root->left = left;
                            root->right = right;
                            list.push_back(root);
                        }
                    }
                }
            }
            memo[n] = list;
        }
        return memo[n];
    }
};
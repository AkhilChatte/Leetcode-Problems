void inorder(TreeNode* root,vector<int>&arr)
{
    if(!root)return;
    inorder(root->left,arr);
    arr.emplace_back(root->val);
    inorder(root->right,arr);
}
class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> arr;
        inorder(root1,arr);
        inorder(root2,arr);
        sort(arr.begin(),arr.end());
        return arr;

    }
};
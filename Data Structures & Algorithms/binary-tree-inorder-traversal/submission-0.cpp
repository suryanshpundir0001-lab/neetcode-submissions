//jai SitaRam

class Solution {
public:
void helper(TreeNode* root,vector<int>&ans){
    if(root==NULL) return;
    TreeNode* temp = root;
    helper(temp->left,ans);
    ans.push_back(temp->val);
    helper(temp->right,ans);
}
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int>ans;
        helper(root,ans);
        return ans;
    }
};
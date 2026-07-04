//jai SitaRam

class Solution {
public:
void helper(TreeNode* root,vector<int>&ans){
    if(root==nullptr) return;
    TreeNode* temp = root;
    ans.push_back(temp->val);
    helper(temp->left,ans);
    helper(temp->right,ans);
}
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr) return{};
        vector<int>ans;
        helper(root,ans);

        return ans;
    }
};
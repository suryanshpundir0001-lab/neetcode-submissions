//jai SitaRam

class Solution {
public:
void helper(TreeNode* root,vector<int>&ans){
    if(root==nullptr) return;
    TreeNode* temp = root;
    helper(temp->left,ans);
    helper(temp->right,ans);
    ans.push_back(temp->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr) return{};
        vector<int>ans;
        helper(root,ans);

        return ans;
    }
};

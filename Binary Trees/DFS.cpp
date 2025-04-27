class Solution {
    public:
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int> result;
            helperPreorder(root,result);
            return result;
        }
    
        void helperPreorder(TreeNode* root,vector<int>& result){
            if(root == nullptr){
                return;
            }
    
            result.push_back(root->val);
            helperPreorder(root->left,result);
            helperPreorder(root->right,result);
        }
};

class Solution {
    public:
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> result;
            helperInorder(root,result);
            return result;
        }
    
        void helperInorder(TreeNode* root,vector<int>& result){
            if(root == nullptr){
                return;
            }
    
            helperInorder(root->left,result);
            result.push_back(root->val);
            helperInorder(root->right,result);
        }
};

class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> result;
            helperPostorder(root,result);
            return result;
        }
    
        void helperPostorder(TreeNode* root,vector<int>& result){
            if(root == nullptr){
                return;
            }
    
            helperPostorder(root->left,result);
            helperPostorder(root->right,result);
            result.push_back(root->val);
        }
};
    
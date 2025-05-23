class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> result;
            queue<TreeNode*> q;
            if (root == nullptr) return result;
            q.push(root);
            while(!q.empty()){
                int size = q.size();
                vector<int> level;
                for(int i = 0 ; i < size ; i++){
                    TreeNode* node = q.front();
                    q.pop();
                    level.push_back(node->val);
    
                    if (node->left != nullptr) q.push(node->left);
                    if (node->right != nullptr) q.push(node->right);
    
                }
    
                result.push_back(level);
            }
            return result;
        }
};
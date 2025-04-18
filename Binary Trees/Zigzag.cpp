class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>> result;
            queue<TreeNode*> q;
            int count = 0;
    
            TreeNode* current = root;
            if(current == nullptr){
                return result;
            }
            q.push(current);
    
            while(!q.empty()){
                int size = q.size();
                vector<int> temp;
                count++;
    
                for(int i = 0 ; i < size ; i++){
                    TreeNode* front = q.front();
                    q.pop();
                    temp.push_back(front->val);
    
                    if(front->left != nullptr){
                        q.push(front->left);
                    }
                    if(front->right != nullptr){
                        q.push(front->right);
                    }
                }
    
                if(count % 2 == 0){
                    reverse(temp.begin(),temp.end());
                }
                result.push_back(temp);
            }
    
            return result;
        }
};
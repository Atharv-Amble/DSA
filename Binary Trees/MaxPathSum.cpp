class Solution {
    public:
        int maxPathSum(TreeNode* root) {
            int maxSum = INT_MIN;
            maxPathSumHelper(root,maxSum);
            return maxSum;
        }
    
        int maxPathSumHelper(TreeNode* root , int& maxSum){
            if(root == nullptr){
                return 0;
            }
    
            int leftGain = max(0, maxPathSumHelper(root->left, maxSum));
            int rightGain = max(0, maxPathSumHelper(root->right, maxSum));
            maxSum = max(maxSum,root->val + leftGain + rightGain);
            return root->val + max(leftGain,rightGain);
        }
};
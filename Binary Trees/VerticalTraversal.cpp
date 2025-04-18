class Solution {
    public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map to store nodes at each x,y coordinate
        map<int, map<int, multiset<int>>> nodes;
        
        // Use an array for BFS instead of queue
        vector<TreeNode*> nodeList;
        vector<int> xCoords;
        vector<int> yCoords;
        
        // Initialize with root
        nodeList.push_back(root);
        xCoords.push_back(0);
        yCoords.push_back(0);
        
        // Process all nodes
        for (int i = 0; i < nodeList.size(); i++) {
            TreeNode* node = nodeList[i];
            int x = xCoords[i];
            int y = yCoords[i];
            
            // Store this node's value
            nodes[x][y].insert(node->val);
            
            // Add left child
            if (node->left) {
                nodeList.push_back(node->left);
                xCoords.push_back(x - 1);
                yCoords.push_back(y + 1);
            }
            
            // Add right child
            if (node->right) {
                nodeList.push_back(node->right);
                xCoords.push_back(x + 1);
                yCoords.push_back(y + 1);
            }
        }
        
        // Prepare result vector
        vector<vector<int>> result;
        
        // For each vertical column (x coordinate)
        for (auto& col : nodes) {
            vector<int> columnValues;
            
            // For each depth level in this column
            for (auto& level : col.second) {
                // For each value at this level
                for (int val : level.second) {
                    columnValues.push_back(val);
                }
            }
            
            result.push_back(columnValues);
        }
        
        return result;
    }
};
    
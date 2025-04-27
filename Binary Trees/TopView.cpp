#include<map>
#include<queue>
#include<vector>
using namespace std;

vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> result;
    map<int, int> mp;
    queue<pair<TreeNode<int>*, int>> q;

    if (!root) {
        return result;
    }

    q.push({root, 0});

    while (!q.empty()) {
        auto it = q.front();
        q.pop();

        TreeNode<int>* node = it.first; // ? no parentheses
        int line = it.second;           // ? no parentheses

        if (mp.find(line) == mp.end()) {
            mp[line] = node->val;
        }

        if (node->left)
            q.push({node->left, line - 1});
        if (node->right)
            q.push({node->right, line + 1});
    }

    for (auto it : mp) {
        result.push_back(it.second);
    }

    return result;
}

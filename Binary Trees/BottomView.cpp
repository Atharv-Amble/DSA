#include<map>
#include<queue>
vector<int> bottomView(TreeNode<int> * root){
   vector<int> result;
   map<int,int> mp;
   queue<pair<TreeNode<int>*,int>> q;

   if(!root) return result;
   q.push({root,0});

   while(!q.empty()){
       auto it = q.front();
       q.pop();
       auto node = it.first;
       int col = it.second;

        mp[col] = node->data;
       if(node->left){
           q.push({node->left,col-1});
       }
       if(node->right){
           q.push({node->right,col+1});
       }
   }

   for(auto it : mp){
       result.push_back(it.second);
   }

   return result;
}
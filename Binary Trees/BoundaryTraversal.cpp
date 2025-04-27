/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
#include <stack>

bool isLeaf(TreeNode<int>* root){
    return (root->left == nullptr && root->right == nullptr);
}

void leftNodes(TreeNode<int>* root,vector<int>& result){
     TreeNode<int>* current = root->left;
     while(current){
        if(!isLeaf(current)){
             result.push_back(current->data);
         }

         if(current->left){
             current = current->left;
         }
         else{
             current = current->right;
         } 
     }
}

void leafNode(TreeNode<int>* root,vector<int>& result){
    if(isLeaf(root)){
        result.push_back(root->data);
        return;
    }

    if(root->left) leafNode(root->left,result);
    if(root->right) leafNode(root->right,result);
}

void rightNodes(TreeNode<int>* root,vector<int>& result){
    TreeNode<int>* current = root->right;
    stack<int> st;
    while(current){
        if(!isLeaf(current)){
            st.push(current->data);
        }
        if(current->right){
            current = current->right;
        }
        else{
            current = current->left;
        }
    }

    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
}


vector<int> traverseBoundary(TreeNode<int> *root)
{
	vector<int> result;
    if(!root){
        return result;
    }
    result.push_back(root->data);
    leftNodes(root,result);
    leafNode(root,result);
    rightNodes(root,result);

    return result;
}

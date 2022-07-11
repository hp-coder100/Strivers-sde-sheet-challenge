#include<map>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int> ans;
    if(!root)return ans;
    map<int,int> mp;
    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int size = q.size();
        while(size--){
            TreeNode<int>* node = q.front().first;
            int line = q.front().second;
            q.pop();
            if(mp.find(line)==mp.end())
                mp[line] = node->val;
            if(node->left)
                q.push(make_pair(node->left, line-1));
            if(node->right)
                q.push(make_pair(node->right, line+1));
            
        }    
    }
    
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
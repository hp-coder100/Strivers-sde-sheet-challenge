vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    if(!root)return ans;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        int v = q.front()->data;
        
        while(size--){
            TreeNode<int>* node = q.front();
            q.pop();
            if(node->right)
                q.push(node->right);
            if(node->left)
                q.push(node->left);
           
        }
        ans.push_back(v);
    }
    
    return ans;
}
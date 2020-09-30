/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
  void build(TreeNode* root,vector<vector<int>> &ret,int depth){
     if(!root) return;
     if(ret.size()==depth) ret.push_back(vector<int>(0));
     ret[depth].push_back(root->val);
     build(root->left,ret,depth+1);
     build(root->right,ret,depth+1);
     return;
 }
vector<vector<int> > Solution::levelOrder(TreeNode* root) {
     vector<vector<int> > ret;
        build(root, ret,0);
        return ret;
    
    
}

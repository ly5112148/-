#include <bits/stdc++.h>
using namespace std;
/*
带记忆的深度优先搜索 
*/
vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
    vector<vector<int>> ret;
    vector<int> trace;
    if(root)
        dfs(root,expectNumber,ret,trace);
    return ret;
}
void dfs(TreeNode* root,int s,vector<vector<int>> &ret,vector<int> &trace) {
    trace.push_back(root->val);
    if(!root->left&&!root->right) {
        if(s==root->val)
            ret.push_back(trace);
    }
    if(root->left)
        dfs(root->left,s-root->val,ret,trace);
    if(root->right)
        dfs(root->right,s-root->val,ret,trace);
    trace.pop_back();
}
int main()  
{
    return 0;
} 

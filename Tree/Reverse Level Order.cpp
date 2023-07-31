
// Given a binary tree, return the reverse level order traversal of its nodes values. (i.e, from left to right and from last level to starting level).



#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<int> solve(TreeNode* A) {
    queue<TreeNode*>q;
    vector<int>ans;
    q.push(A);
    while(q.empty()==false){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            TreeNode*curr=q.front();
            q.pop();
            ans.push_back(curr->val);
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}



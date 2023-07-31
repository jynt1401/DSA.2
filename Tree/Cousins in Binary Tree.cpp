
// Given a Binary Tree A consisting of N nodes. You need to find all the cousins of node B.Siblings should not be considered as cousins. Try to do it in single traversal.You can assume that Node B is there in the tree A. Order doesn't matter in the output.



#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<int>solve(TreeNode* A, int B) {
    vector<int> v;
    queue<TreeNode *> q;
    q.push(A);
    bool m=true;
    while(!q.empty() && m){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode *t=q.front();
            q.pop();
            if( (t->left   && t->left->val== B) || (t->right && t->right->val==B))
 m=false;
            else {
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            }
        }
    }
    while(!q.empty()){
        v.push_back(q.front()->val);
        q.pop();
    }
    return v;
}



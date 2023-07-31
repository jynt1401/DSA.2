
// Given a binary tree, return the zigzag level order traversal of its nodes’ values. (ie, from left to right, then right to left for the next level and alternate between).


#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<vector<int> > zigzagLevelOrder(TreeNode* A) {
    queue<TreeNode*>q;
    q.push(A);
    int check=1;
    vector<vector<int> >ans;
    while(q.empty()==false){
        int sz=q.size();
        vector<int>a;
        for(int i=0;i<sz;i++){
            TreeNode*curr=q.front();
            q.pop();
            a.push_back(curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
            
        }
        if(check%2==0){
            reverse(a.begin(),a.end());
        }
        ans.push_back(a);
        check++;
    }
    return ans;
}



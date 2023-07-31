// Given a binary tree
//     struct TreeLinkNode {
//       TreeLinkNode *left;
//       TreeLinkNode *right;
//       TreeLinkNode *next;
//     } 
// Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
// Initially, all next pointers are set to NULL.


#include<bits/stdc++.h>
using namespace std;

struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
};

void connect(TreeLinkNode* A) {
    queue<TreeLinkNode*>q;
    q.push(A);
    while(q.empty()==false){
        int sz=q.size();
        for(int i=0;i<sz;i++){
            TreeLinkNode*curr1=q.front();
            q.pop();
            if(i==sz-1){
                curr1->next=NULL;
            }
            else{
                curr1->next=q.front();
            }
            if(curr1->left){
                q.push(curr1->left);
            }
            if(curr1->right){
                q.push(curr1->right);
            }
            // q.push(NULL);
            
            
        }
    }
    
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }
int left = maxDepth(root->left);
int right = maxDepth(root->right);
    
    if(left > right){
        int h = left +1;
            return h;
        
    }
    else{
        int h = right +1;
            return h;
    }

    
}
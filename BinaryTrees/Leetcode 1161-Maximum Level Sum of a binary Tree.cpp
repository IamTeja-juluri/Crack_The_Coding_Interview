/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
     if(root==NULL)
         return 0;
        queue<TreeNode*> q;
        q.push(root);
        int maxlevel=0,j=0;
        int maxsum=INT_MIN;
        while(!q.empty())
        {
            j++;
            int n=q.size();
            int sum=0;
            for(int i=1;i<=n;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
          if(sum>maxsum)
          {
              maxsum=sum;
              maxlevel=j;
          }
        }
        return maxlevel;
    }
};

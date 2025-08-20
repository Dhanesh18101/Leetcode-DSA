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
    void Getinorder(TreeNode* root,vector<int>& nums) {
        if(root==NULL) {
            return;
        }
        Getinorder(root->left,nums);
        nums.push_back(root->val);
        Getinorder(root->right,nums);
    }
    TreeNode* Helper(vector<int>& nums,int st,int end) {
        int n=nums.size();
        if(st>end) {
            return NULL;
        }
        int mid=st+(end-st)/2;
        TreeNode* curr=new TreeNode(nums[mid]);
        curr->left=Helper(nums,st,mid-1);
        curr->right=Helper(nums,mid+1,end);
        return curr;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        Getinorder(root,nums);
        int n = nums.size();      // now size will be correct
        TreeNode* par = Helper(nums, 0, n - 1);
        return par;
    }
};
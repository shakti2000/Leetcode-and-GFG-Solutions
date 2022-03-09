/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* helper(vector<int>& nums , int start , int end){
		if(start<=end){
		int mid = start + (end-start)/2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = helper(nums,start,mid-1);
		root->right = helper(nums,mid+1,end);
		return root;
		}
		return NULL;
	}
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode*temp=head;
        vector<int>tempv;
        while(temp!=NULL){
            tempv.push_back(temp->val);
            temp=temp->next;
        }
        return helper(tempv,0,tempv.size()-1);
    }
};
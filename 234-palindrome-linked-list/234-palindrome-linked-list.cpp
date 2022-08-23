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
class Solution {
public:
    bool check(vector<int>nums){
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]!=nums[j])return false;
            i++;j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>temp;
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        return check(temp);
    }
};
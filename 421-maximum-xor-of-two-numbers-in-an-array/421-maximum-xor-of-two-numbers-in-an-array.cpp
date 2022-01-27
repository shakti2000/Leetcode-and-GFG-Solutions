class trieNode{
public:
    trieNode *left;
    trieNode *right;
};

/*
 
 _insert() function is used to insert the binary digits in Binary Search Tree
 The main approach will be
 1] If the binary digit is '0' , then add it to the left
 2] If the binary digit is '1' , then add it to the right
 
*/

trieNode* _insert(int value, trieNode* head){
    trieNode* cur = head;
    for(int i = 31; i>=0; i--){
        int bit  = (value>>i)&1;
        if(bit == 0){  
            if(!cur->left)
                cur->left = new trieNode();
            cur = cur->left;
        }
        else{
            if(!cur->right)
                cur->right = new trieNode();
            cur = cur->right;
        }
    }
    return head;
}


class Solution {
public:
    int xorVal(trieNode* head, vector<int> & nums){
        int maxVal = INT_MIN;

        for(int j = 0; j<nums.size();j++){
            int curXor = 0;
            int value = nums[j];
            trieNode* cur = head;

            for(int i = 31; i>=0; i--){
                int bit  = (value>>i)&1;
                if(bit == 0){
                    if(cur->right){
                        curXor += pow(2,i);
                        cur = cur->right;
                    }
                    else
                        cur = cur->left;
                }
                else{
                    if(cur->left){
                        curXor += pow(2,i);
                        cur = cur->left;
                    }
                    else
                        cur = cur->right;
                }
            }
            maxVal = max(maxVal, curXor);
        }
        return maxVal;
    }

                                      
    int findMaximumXOR(vector<int>& nums) {
        trieNode* head = new trieNode();
        
        for(int j = 0; j<nums.size();j++)
            head = _insert(nums[j], head);

        return xorVal(head, nums);
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0],slow=nums[0],head=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        while(head!=slow)
        {
            head=nums[head];
            slow=nums[slow];
        }
        return head;
    }
};
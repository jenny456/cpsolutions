class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        int ans=nums[0]^nums[1];
        for(int i=2;i<n;i++) {
            ans=ans^nums[i];
        }
        return ans;
        
    }
};
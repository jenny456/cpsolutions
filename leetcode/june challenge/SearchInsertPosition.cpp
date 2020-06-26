class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size();
        int ans;
        int flag=0;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans=mid;
                return mid;
                // flag=1;
                break;
            }
            else if(target<nums[mid])
            {
                end=mid;
            }
            else
                start=mid+1;
        }
        // if(flag!=1)
            // ans=start;
        return start;
        
    }
};
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int mx_size=0,count=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==0)
            {
                count=count-1;
            }
            else
                count=count+1;
            
            if(mp.find(count)!=mp.end())
                mx_size=max(mx_size,i-mp[count]);
            else
            mp[count]=i;
        }
        return mx_size;
    }
};
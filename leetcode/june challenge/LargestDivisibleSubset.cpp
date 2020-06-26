class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        if(n == 0)
          return {};
        vector<int> dp(n,1);
        vector<int>prev_ind(n,-1);
        int max_ind=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    prev_ind[i]=j;                    
                }
            }
            if(dp[i]>dp[max_ind])
            max_ind=i;
        }
        vector<int> ans;
        int t=max_ind;
        while(t>=0)
        {
            ans.push_back(nums[t]);
            t=prev_ind[t];
        }
        
        return ans;
        
    }
};
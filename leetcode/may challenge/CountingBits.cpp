class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp;
        for(int i=0;i<=num;i++)
        {
            if(i==0)
                dp.push_back(0);
            else
                if(ceil(log2(i))==floor(log2(i)))
                    dp.push_back(1);
            else if(i%2==1)
                dp.push_back(dp[i-1]+1);
            else 
                dp.push_back(dp[i/2]);
        }
        return dp;
    }
};
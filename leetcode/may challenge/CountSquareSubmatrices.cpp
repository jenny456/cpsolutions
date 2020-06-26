class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
      
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0)
                {
                    dp[i][j]=matrix[i][j];
                }
                else if(j==0)
                {
                    dp[i][j]=matrix[i][j];
                }
                else if(matrix[i][j])
                {
                    dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=ans+dp[i][j];
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int n=trust.size();
        if(N==1 && trust.empty())
            return N;
        if(n==1)
            return trust[0][1];
        vector<int> trustvalue(N+1,0);
        for(int i=0;i<n;i++)
        {
            trustvalue[trust[i][0]]--;
            trustvalue[trust[i][1]]++;
            
        }
        for(int i=0;i<N+1;i++) 
        {
            if(trustvalue[i]==N-1)
                return i;
        }
        return -1;
        
    }
};
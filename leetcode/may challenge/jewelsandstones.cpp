class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> mp;
        for(int i=0;i<S.length();i++) {
            if(mp.find(S[i])==mp.end())
            {
                mp[S[i]]=1;
            }
            else
                mp[S[i]]++;
        }
        int res=0;
        for(int i=0;i<J.length();i++)
        {
            if(mp.find(J[i])!=mp.end())
                res=res+mp[J[i]];
        }
        return res;
    }
};
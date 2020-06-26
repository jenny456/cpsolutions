class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        int matched=0,start=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s1.length();i++) 
        {
            if(mp.find(s1[i])!=mp.end())
                mp[s1[i]]++;
            else
                mp[s1[i]]=1;
        }
        for(int end=0;end<s2.length();end++) 
        {
            if(mp.find(s2[end])!=mp.end())
            {
                mp[s2[end]]--;
                if(mp[s2[end]]==0)
                    matched++;
            }
            if(matched==mp.size())
                return true;
            if(end-start+1>= s1.length())
            {
                if(mp.find(s2[start]) !=mp.end())
                {
                    if(mp[s2[start]]==0)
                        matched--;
                    mp[s2[start]]++;
                }
                start++;
            }
        }
        return false;
    }
};